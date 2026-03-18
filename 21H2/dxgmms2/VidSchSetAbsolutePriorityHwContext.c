/*
 * XREFs of VidSchSetAbsolutePriorityHwContext @ 0x1C00F5DE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00F63D0 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetAbsolutePriorityHwContext(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  if ( a1 )
  {
    if ( a2 > 0x1E )
    {
      WdLogSingleEntry2(1LL, a2, -1073741811LL);
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
    }
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v9, -1071775232LL);
      return 3223192064LL;
    }
    else if ( a2 < 0x10
           || a3
           || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 8LL) + 424LL) & 2) != 0
           || SeSinglePrivilegeCheck((LUID)14LL, 1) )
    {
      *(_BYTE *)(a1 + 88) = 1;
      *(_DWORD *)(a1 + 84) = a2;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
    else
    {
      return 3221225506LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
