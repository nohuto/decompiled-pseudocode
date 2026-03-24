/*
 * XREFs of VidSchSetAbsolutePriorityHwContext @ 0x1C00D33C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00D3B78 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetAbsolutePriorityHwContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // bp
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = (unsigned int)a2;
  v4 = a3;
  if ( a1 )
  {
    if ( (unsigned int)a2 > 0x1E )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
      *(_QWORD *)(v8 + 24) = v3;
      *(_QWORD *)(v8 + 32) = -1073741811LL;
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
    {
      v11 = WdLogNewEntry5_WdWarning(a1, a2);
      *(_QWORD *)(v11 + 24) = v9;
      *(_QWORD *)(v11 + 32) = -1071775232LL;
      WdLogEvent5_WdWarning(v11);
      return 3223192064LL;
    }
    else if ( (unsigned int)v3 < 0x1E
           || v4
           || (v10 = *(_QWORD *)(v9 + 40), *(_BYTE *)(*(_QWORD *)(v10 + 8) + 345LL))
           || *(_BYTE *)(v10 + 2625)
           || SeSinglePrivilegeCheck((LUID)14LL, 1) )
    {
      *(_BYTE *)(a1 + 88) = 1;
      *(_DWORD *)(a1 + 84) = v3;
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
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
