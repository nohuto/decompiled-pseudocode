/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C0035400
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiControlVSync @ 0x1C00866D4 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rdi
  char v7; // si
  __int64 v9; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // rbp
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  bool v16; // zf
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // eax
  _QWORD v26[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v27; // [rsp+40h] [rbp-18h]

  v5 = (unsigned int)a2;
  v7 = a3;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  v12 = (struct _ERESOURCE *)(a1 + 1072);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1072), 1u);
  LOBYTE(v13) = *(_BYTE *)(a1 + 2132);
  v14 = 1 << v5;
  v15 = *(_DWORD *)(a1 + 2128);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 2128) = v14 | v15;
    if ( (_BYTE)v13 )
      v16 = *(_DWORD *)(a1 + 4 * v5 + 1808) == 0;
    else
      v16 = *(_DWORD *)(a1 + 1808) == 0;
    if ( v16 )
      goto LABEL_20;
    v17 = (unsigned int)v5;
    v18 = 65538LL;
    if ( !(_BYTE)v13 )
      v17 = 4294967293LL;
    LOBYTE(v13) = 1;
    goto LABEL_19;
  }
  v19 = v15 & ~v14;
  *(_DWORD *)(a1 + 2128) = v19;
  if ( (_BYTE)v13 )
  {
    v17 = (unsigned int)v5;
LABEL_18:
    v18 = 2LL;
    v13 = 0LL;
LABEL_19:
    VidSchiControlVSync(a1, v13, v18, v17);
    goto LABEL_20;
  }
  if ( !v19 )
  {
    v17 = 4294967293LL;
    goto LABEL_18;
  }
LABEL_20:
  ExReleaseResourceLite(v12);
  if ( v7 )
  {
    _mm_lfence();
    v27 = 0;
    v26[0] = a1 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v26);
    v21 = *(unsigned int *)(a4 + 12);
    v22 = v5;
    v23 = *(_QWORD *)(a1 + 8 * v5 + 3104);
    if ( (_DWORD)v21 )
    {
      v25 = 0x3E8 / (unsigned int)v21;
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v21, v20);
      *(_QWORD *)(v24 + 24) = v22;
      WdLogEvent5_WdWarning(v24);
      v25 = 0;
    }
    *(_DWORD *)(v23 + 70580) = v25;
    if ( a5 && *(int *)(*(_QWORD *)(a1 + 16) + 2572LL) >= 2600 )
      *(_DWORD *)(v23 + 70584) ^= (*(_DWORD *)(v23 + 70584) ^ (*a5 >> 11)) & 1;
    else
      *(_DWORD *)(v23 + 70584) &= ~1u;
    AcquireSpinLock::Release((AcquireSpinLock *)v26);
  }
  return 0LL;
}
