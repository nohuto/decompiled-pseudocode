/*
 * XREFs of Return @ 0x1C000A590
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     NewObjData @ 0x1C000A9E8 (NewObjData.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall Return(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  struct _SLIST_ENTRY *v5; // rbp
  void *v7; // rax
  _DWORD *v8; // r14
  int v9; // esi
  _DWORD *v10; // r15
  __int64 *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 88);
  v5 = *(struct _SLIST_ENTRY **)(a1 + 320);
  if ( v4 != v2 )
  {
    *(_OWORD *)v4 = *(_OWORD *)v2;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(v2 + 32);
    if ( *(_QWORD *)(v2 + 32) )
    {
      v7 = (void *)NewObjData(v5, v2);
      *(_QWORD *)(v4 + 32) = v7;
      if ( !v7 )
      {
        v3 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(43, 0, 0, 0, 0LL);
        return v3;
      }
      memmove(v7, *(const void **)(v2 + 32), *(unsigned int *)(v2 + 24));
      if ( *(_WORD *)(v4 + 2) == 4 )
      {
        v8 = *(_DWORD **)(v2 + 32);
        v9 = 0;
        v10 = *(_DWORD **)(v4 + 32);
        for ( *v10 = *v8; v9 < *v8; ++v9 )
        {
          v3 = DupObjData(v5, (__int64)&v10[10 * v9 + 2], (__int64)&v8[10 * v9 + 2]);
          if ( v3 )
            break;
        }
        goto LABEL_11;
      }
      if ( *(_WORD *)(v4 + 2) != 5 )
      {
        if ( *(_WORD *)(v4 + 2) == 130 )
        {
          v13 = *(_QWORD **)(v4 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*v13 + 112LL));
            v13 = *(_QWORD **)(v4 + 32);
          }
          if ( (gdwfAMLI & 4) == 0 )
            goto LABEL_11;
          v12 = v13[1];
LABEL_22:
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 112));
LABEL_11:
          *(_WORD *)v4 &= ~1u;
          _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
          goto LABEL_3;
        }
        if ( *(_WORD *)(v4 + 2) != 131 )
        {
          if ( *(_WORD *)(v4 + 2) != 132 )
            goto LABEL_11;
          v11 = *(__int64 **)(v4 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v11[1] + 112));
            v11 = *(__int64 **)(v4 + 32);
          }
          if ( (gdwfAMLI & 4) == 0 )
            goto LABEL_11;
          v12 = *v11;
          goto LABEL_22;
        }
      }
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
      goto LABEL_11;
    }
  }
LABEL_3:
  if ( !v3 )
    return 32770;
  return v3;
}
