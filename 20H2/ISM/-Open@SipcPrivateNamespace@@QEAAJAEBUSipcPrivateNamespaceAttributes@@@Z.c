/*
 * XREFs of ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800C0F90
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF1F0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800BEB88 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BEBB0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x1800C0584 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall SipcPrivateNamespace::Open(
        SipcPrivateNamespace *this,
        const struct SipcPrivateNamespaceAttributes *a2)
{
  int BoundaryDescriptorAndInitializeName; // ebx
  char *v5; // rbx
  HANDLE v6; // rax
  __int64 v7; // rdx
  wil::details::in1diag0 *v8; // rcx
  __int64 v9; // r8
  const char *v10; // r9
  unsigned int LastError; // edi
  HANDLE BoundaryDescriptor; // [rsp+38h] [rbp+10h] BYREF

  if ( !IsValidSid((char *)a2 + 16) || !IsValidSid((char *)a2 + 84) )
  {
    BoundaryDescriptorAndInitializeName = -2147024809;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
  *(_OWORD *)((char *)this + 84) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 164) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 196) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 212) = *((_OWORD *)a2 + 8);
  *(_QWORD *)((char *)this + 228) = *((_QWORD *)a2 + 18);
  BoundaryDescriptor = 0LL;
  BoundaryDescriptorAndInitializeName = SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(
                                          this,
                                          &BoundaryDescriptor);
  if ( BoundaryDescriptorAndInitializeName < 0 )
  {
    if ( (char *)BoundaryDescriptor - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
  v5 = (char *)BoundaryDescriptor;
  v6 = OpenPrivateNamespaceW(BoundaryDescriptor, (LPCWSTR)this + 4);
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      DeleteBoundaryDescriptor(v5);
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v8, v7, v9, v10);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      DeleteBoundaryDescriptor(v5);
    return LastError;
  }
}
