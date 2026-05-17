/*
 * XREFs of LdrDeleteEnclave @ 0x1800CCD90
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800CD3EC (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CD470 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800CFFB4 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rdi
  int v3; // ebx
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8

  v1 = LdrpObtainLockedEnclave(a1, 1);
  v2 = v1;
  if ( !v1 )
    goto LABEL_5;
  v3 = *((_DWORD *)v1 + 14);
  v4 = LdrpDeleteEnclave(v1);
  RtlLeaveCriticalSection((__int64)(v2 + 2), v5, v6);
  LdrpDereferenceEnclave(v2);
  if ( v3 != 16 )
    v2 = 0LL;
  if ( v4 >= 0 )
LABEL_5:
    v4 = ZwFreeVirtualMemory();
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return (unsigned int)v4;
}
