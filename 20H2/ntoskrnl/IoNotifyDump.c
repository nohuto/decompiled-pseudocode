/*
 * XREFs of IoNotifyDump @ 0x1403838C4
 * Callers:
 *     PopRestoreHiberContext @ 0x1409964E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoNotifyDump(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( qword_140C50B10 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        if ( v2 != 1 )
          return result;
        v3 = 5LL;
      }
      else
      {
        v3 = 4LL;
      }
    }
    else
    {
      v3 = 3LL;
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_140C50B10)(v3, 0LL, 0LL);
  }
  return result;
}
