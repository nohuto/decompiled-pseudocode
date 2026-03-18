/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x140904A80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(__int64 Object, __int64 a2)
{
  int v2; // eax
  int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v2 = *(_DWORD *)(Object + 1120);
  v7 = 0LL;
  if ( (v2 & 1) != 0 || !ObReferenceObjectSafeWithTag(Object) )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Object + 1112)) )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 480LL);
      if ( v9 <= 0xFFFFFFFD )
      {
        *(_QWORD *)&v7 = Object;
        *((_QWORD *)&v7 + 1) = &v8;
        v5 = PsInvokeWin32Callout(24, (__int64)&v7, 1, (__int64)&v9);
        if ( v5 >= 0 )
          **(_QWORD **)a2 += v8;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 1112));
    }
    ObfDereferenceObjectWithTag((PVOID)Object, 0x624A7350u);
  }
  return (unsigned int)v5;
}
