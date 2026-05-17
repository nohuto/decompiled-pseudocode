/*
 * XREFs of RtlpHpStackTraceSerialize @ 0x1801092C4
 * Callers:
 *     RtlQueryHeapInformation @ 0x180073EA0 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpEnumProcessHeaps @ 0x18007419C (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801093B4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlStackDbContextSerialize @ 0x18011832C (RtlStackDbContextSerialize.c)
 */

__int64 __fastcall RtlpHpStackTraceSerialize(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  signed int v6; // ebx
  char v7; // al

  if ( a2 == 40 && *(_DWORD *)a1 == 2 )
  {
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, 0x28uLL, (unsigned __int64)a3, a4);
      if ( (dword_18016B568 & 1) != 0 && (dword_18016B568 & 2) != 0 )
      {
        *(_BYTE *)(a1 + 33) |= 1u;
        v6 = RtlStackDbContextSerialize(&qword_18016B570, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
        if ( v6 >= 0 )
        {
          v6 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapSerialize, a1, 0LL);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 16))(0LL, 0LL, *(_QWORD *)(a1 + 24));
            if ( v6 >= 0 )
            {
              v6 = 0;
              if ( a3 )
                *a3 = 0LL;
            }
          }
        }
      }
      else
      {
        v7 = *(_BYTE *)(a1 + 32) - 1;
        *(_BYTE *)(a1 + 33) = 0;
        v6 = v7 != 0 ? 0xC000000D : 0;
      }
      RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
    }
    else
    {
      return (unsigned int)RtlpHpStackTraceSerializeRemote();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
