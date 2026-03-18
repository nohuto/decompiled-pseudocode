/*
 * XREFs of AlpcpCaptureSecurityAttribute32 @ 0x1406EBEAC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140686C00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140688724 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute32(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // xmm0_8
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+48h] [rbp-10h]
  int v11; // [rsp+78h] [rbp+20h]

  v11 = *(_DWORD *)a2;
  v8 = *(int *)(a2 + 8);
  v4 = (__int64 *)*(unsigned int *)(a2 + 4);
  if ( (_DWORD)v4 )
  {
    v5 = *v4;
    v6 = *(_DWORD *)(*(unsigned int *)(a2 + 4) + 8LL);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 260);
    v6 = *(_DWORD *)(a1 + 268);
  }
  v10 = v6;
  v9 = v5;
  result = AlpcpCaptureSecurityAttributeInternal((_QWORD *)a1, v11, (__int64)&v9, &v8, a3);
  if ( (int)result >= 0 )
    *(_DWORD *)(a2 + 8) = v8;
  return result;
}
