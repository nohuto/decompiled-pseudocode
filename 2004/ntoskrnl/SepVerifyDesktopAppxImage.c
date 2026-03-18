/*
 * XREFs of SepVerifyDesktopAppxImage @ 0x140201394
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140269A78 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     SeGetTrustLabelAce @ 0x14026DCA0 (SeGetTrustLabelAce.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x14065E650 (RtlCreateSecurityDescriptor.c)
 *     PsReferenceProcessFilePointer @ 0x1406B7770 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x1406FC56C (ObQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxImage(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  _BYTE *v5; // rdi
  __int64 TrustLabelAce; // r15
  NTSTATUS v9; // ebx
  int SecurityObject; // eax
  _BYTE *PoolWithTag; // rax
  _BYTE v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE SecurityDescriptor[512]; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  v5 = 0LL;
  v13[0] = 0;
  TrustLabelAce = 0LL;
  *a4 = 0;
  v9 = PsReferenceProcessFilePointer(a1, &NumberOfBytes[1]);
  if ( v9 < 0 )
    goto LABEL_13;
  NumberOfBytes[0] = 512;
  v5 = SecurityDescriptor;
  v9 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v9 < 0 )
    goto LABEL_13;
  SecurityObject = ObQuerySecurityObject(
                     NumberOfBytes[1],
                     132,
                     (unsigned int)SecurityDescriptor,
                     512,
                     (__int64)NumberOfBytes);
  if ( SecurityObject != -1073741789 )
    goto LABEL_4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741801;
    goto LABEL_13;
  }
  v9 = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( v9 >= 0 )
  {
    SecurityObject = ObQuerySecurityObject(NumberOfBytes[1], 132, (_DWORD)v5, NumberOfBytes[0], (__int64)NumberOfBytes);
LABEL_4:
    if ( SecurityObject < 0 )
    {
      v9 = 0;
    }
    else if ( v5 )
    {
      v9 = SepVerifyDesktopAppxPackageName(a2, v5, v13);
      if ( v9 >= 0 && a3 == 1 )
        TrustLabelAce = SeGetTrustLabelAce(v5);
      if ( v13[0] == 1 )
      {
        if ( a3 == 1 )
        {
          if ( TrustLabelAce )
          {
LABEL_12:
            *a4 = 1;
            goto LABEL_13;
          }
          v9 = -1073740702;
        }
        if ( !a3 )
          goto LABEL_12;
      }
    }
    else
    {
      v9 = -1073739509;
    }
  }
LABEL_13:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ObfDereferenceObjectWithTag(*(PVOID *)&NumberOfBytes[1], 0x746C6644u);
  if ( v5 && v5 != SecurityDescriptor )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v9;
}
