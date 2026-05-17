/*
 * XREFs of LdrInitializeEnclave @ 0x1800CCC80
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     ZwInitializeEnclave @ 0x18009EDC0 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A05C0 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A0DC0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CD2D0 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800CFEF4 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

__int64 __fastcall LdrInitializeEnclave(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rbx
  bool v7; // zf

  v2 = 0;
  v3 = LdrpObtainLockedEnclave(a2, 1);
  v6 = v3;
  if ( v3 && *((_DWORD *)v3 + 14) == 16 && *((_DWORD *)v3 + 16) )
  {
    if ( *((_DWORD *)v3 + 16) != 1 )
    {
      v2 = -1073741502;
      goto LABEL_12;
    }
  }
  else
  {
    v2 = ZwInitializeEnclave();
    if ( v2 < 0 )
      goto LABEL_12;
  }
  if ( !v6 )
    return (unsigned int)v2;
  v7 = *((_DWORD *)v6 + 14) == 16;
  *((_DWORD *)v6 + 16) = 1;
  if ( v7 )
  {
    v2 = RtlCallEnclave();
    if ( v2 < 0 )
      NtTerminateEnclave();
    else
      *((_DWORD *)v6 + 16) = 2;
  }
LABEL_12:
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 14) == 16 )
      LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v2);
    RtlLeaveCriticalSection((__int64)(v6 + 2), v4, v5);
    LdrpDereferenceEnclave(v6);
  }
  return (unsigned int)v2;
}
