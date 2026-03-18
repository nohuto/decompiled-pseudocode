/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x1C02C62BC
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1C02C4730 (DpAcquirePostDisplayOwnership.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x1C02C4750 (DpAcquirePostDisplayOwnership2.c)
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C02C4B10 (DpGetPostDisplayInfoPlusEdid.c)
 * Callees:
 *     memmove @ 0x1C0027140 (memmove.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, _OWORD *a2, _DWORD *a3)
{
  _OWORD *v4; // rsi
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  v6 = 0;
  if ( KeGetCurrentIrql() <= 1u )
  {
    if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C00B0E70 && a1 == qword_1C00B0E78 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
        {
          a2 = (_OWORD *)*(unsigned int *)(v8 + 236);
          if ( (_DWORD)a2 != 2
            && (*(_DWORD *)(v8 + 240) != 2 || (((_DWORD)a2 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)a2 == 4) )
          {
            *(_BYTE *)(v8 + 3904) |= 4u;
          }
        }
      }
      if ( qword_1C00B0DB8 == a1 )
      {
        memmove(v4, &xmmword_1C00B0DC8, 0x20uLL);
        if ( a3 )
          *a3 ^= ((unsigned __int8)dword_1C00B0EB4 ^ (unsigned __int8)*a3) & 0xF;
      }
      else
      {
        v9 = WdLogNewEntry5_WdEvent(v8, a2);
        *(_QWORD *)(v9 + 24) = 0LL;
        WdLogEvent5_WdEvent(v9);
        *v4 = 0LL;
        v4[1] = 0LL;
        *((_DWORD *)v4 + 6) = -1;
        if ( a3 )
          *a3 &= 0xFFFFFFF0;
      }
    }
    else
    {
      v6 = -1073741811;
      v10 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v10 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v10);
    }
  }
  else
  {
    v6 = -1073741811;
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v7[3] = 275LL;
    v7[4] = 21LL;
    v7[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  return v6;
}
