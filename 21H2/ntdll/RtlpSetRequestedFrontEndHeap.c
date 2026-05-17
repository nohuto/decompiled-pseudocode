/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x180074EF0
 * Callers:
 *     RtlSetHeapInformation @ 0x180074DE0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax

  v2 = 0;
  v3 = 0;
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  v6 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v6 = 208LL;
  if ( *(_WORD *)(v6 + a1) == 0xFFFF )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v4, v5);
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v4, v5);
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock, v4, v5);
  return v3;
}
