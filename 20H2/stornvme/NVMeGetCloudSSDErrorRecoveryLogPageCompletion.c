/*
 * XREFs of NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0017A50
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeGetCloudSSDErrorRecoveryLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v5 = v3 + 3960;
  v6 = SrbExtension;
  if ( *(_BYTE *)(v4 + 3) != 1 )
    goto LABEL_5;
  result = *(_QWORD *)(*(_QWORD *)v5 + 496LL) - 0x4DAB3DFD5A1983BALL;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 496LL) == 0x4DAB3DFD5A1983BALL )
    result = *(_QWORD *)(*(_QWORD *)v5 + 504LL) - 0x44D93121FE3034AELL;
  if ( result )
LABEL_5:
    result = NVMeFreeDmaBuffer(v3, 512LL, v5, *(_QWORD *)(v3 + 3976));
  *(_BYTE *)(v6 + 4253) |= 8u;
  return result;
}
