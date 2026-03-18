/*
 * XREFs of PoCreateThermalRequest @ 0x1407911B0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1403638F8 (PoCaptureReasonContext.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopAssociateThermalRequest @ 0x1407912B0 (PopAssociateThermalRequest.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCreateThermalRequest(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  _QWORD *v5; // rbx
  int v8; // edi
  _QWORD *PoolWithTag; // rax
  int v10; // r8d
  __int64 v11; // rax
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v5 = 0LL;
  *a1 = 0LL;
  if ( !a2 || !a3 || !a4 )
  {
    v8 = -1073741811;
LABEL_8:
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_11;
  }
  v8 = PoCaptureReasonContext(a4, 0LL, a3, 1, 0LL, &P);
  if ( v8 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x240uLL, 0x6C6F4350u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x240uLL);
      v10 = a5;
      v5[3] = P;
      *((_BYTE *)v5 + 16) = 100;
      v11 = MEMORY[0xFFFFF78000000008];
      v5[6] = MEMORY[0xFFFFF78000000008];
      v5[7] = v11;
      v8 = PopAssociateThermalRequest(v5, a2, v10 >= 0);
      if ( v8 >= 0 )
      {
        *a1 = v5;
        goto LABEL_8;
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
LABEL_11:
  if ( P )
    PoDestroyReasonContext(P);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6C6F4350u);
  return (unsigned int)v8;
}
