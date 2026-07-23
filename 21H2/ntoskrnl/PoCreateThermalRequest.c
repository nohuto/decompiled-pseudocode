/*
 * XREFs of PoCreateThermalRequest @ 0x140791ED0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopAssociateThermalRequest @ 0x140791FD0 (PopAssociateThermalRequest.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
