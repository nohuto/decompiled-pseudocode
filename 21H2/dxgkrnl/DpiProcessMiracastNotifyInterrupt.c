/*
 * XREFs of DpiProcessMiracastNotifyInterrupt @ 0x1C0055204
 * Callers:
 *     DxgNotifyInterruptCB @ 0x1C000D8A0 (DxgNotifyInterruptCB.c)
 * Callees:
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C00532FC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     McTemplateK0xqqqqqqqq_EtwWriteTransfer @ 0x1C0056CDC (McTemplateK0xqqqqqqqq_EtwWriteTransfer.c)
 */

void __fastcall DpiProcessMiracastNotifyInterrupt(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v6; // rax
  struct MIRACAST_CHUNK *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct MIRACAST_CHUNK *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  struct MIRACAST_CHUNK **v14; // rcx
  __int64 v15; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0xqqqqqqqq_EtwWriteTransfer(
        *(_QWORD *)(a2 + 24) >> 40,
        a2,
        a3,
        *(_QWORD *)(v3 + 3240),
        *(_DWORD *)(a2 + 8),
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 24),
        (unsigned __int16)WORD2(*(_QWORD *)(a2 + 24)) >> 8,
        *(_DWORD *)(a2 + 32),
        *(_DWORD *)(a2 + 36),
        *(_DWORD *)(a2 + 48),
        *(_DWORD *)(a2 + 52));
    if ( *(_QWORD *)(v3 + 3232) && !*(_BYTE *)(v3 + 3249) )
    {
      if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(v3 + 3224) && *(_DWORD *)(a2 + 48) <= *(_DWORD *)(v3 + 3216) )
      {
        v7 = MIRACAST_CHUNK_LIST::RemoveHead(*(MIRACAST_CHUNK_LIST **)(v3 + 3256));
        v11 = v7;
        if ( v7 )
        {
          *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 16);
          *((_QWORD *)v7 + 4) = *(_QWORD *)(a2 + 32);
          *((_DWORD *)v7 + 10) = *(_DWORD *)(a2 + 48);
          memmove((char *)v7 + 44, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 48));
          v13 = *(_QWORD *)(v3 + 3264);
          v14 = *(struct MIRACAST_CHUNK ***)(v13 + 8);
          if ( *v14 != (struct MIRACAST_CHUNK *)v13 )
            __fastfail(3u);
          *(_QWORD *)v11 = v13;
          *((_QWORD *)v11 + 1) = v14;
          *v14 = v11;
          *(_QWORD *)(v13 + 8) = v11;
          ++*(_DWORD *)(v13 + 16);
        }
        else
        {
          v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
          *(_QWORD *)(v12 + 24) = v3;
          WdLogEvent5_WdWarning(v12);
          *(_BYTE *)(v3 + 3248) = 1;
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741811;
        v6 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v6 + 24) = v3;
        *(_QWORD *)(v6 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v6);
        *(_BYTE *)(v3 + 3249) = 1;
      }
    }
  }
  else
  {
    v4 = -1073741811;
    v15 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v15 + 24) = v3;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  *(_DWORD *)(a2 + 52) = v4;
}
