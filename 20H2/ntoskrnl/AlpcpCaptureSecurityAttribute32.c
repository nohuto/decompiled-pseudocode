/*
 * XREFs of AlpcpCaptureSecurityAttribute32 @ 0x1406C04A0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405ED830 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1405F2E2C (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute32(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // xmm0_8
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+78h] [rbp+20h]

  v10 = *(_DWORD *)a2;
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
  *(_DWORD *)&v9.ContextTrackingMode = v6;
  *(_QWORD *)&v9.Length = v5;
  result = AlpcpCaptureSecurityAttributeInternal((volatile signed __int64 *)a1, v10, &v9, &v8, a3);
  if ( (int)result >= 0 )
    *(_DWORD *)(a2 + 8) = v8;
  return result;
}
