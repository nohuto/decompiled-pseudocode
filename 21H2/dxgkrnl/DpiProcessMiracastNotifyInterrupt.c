/*
 * XREFs of DpiProcessMiracastNotifyInterrupt @ 0x1C0062E08
 * Callers:
 *     DxgNotifyInterruptCB @ 0x1C0015280 (DxgNotifyInterruptCB.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C0060F88 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     McTemplateK0xqqqqqqqq_EtwWriteTransfer @ 0x1C00648CC (McTemplateK0xqqqqqqqq_EtwWriteTransfer.c)
 */

void __fastcall DpiProcessMiracastNotifyInterrupt(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  struct MIRACAST_CHUNK *v6; // rax
  struct MIRACAST_CHUNK *v7; // r14
  __int64 v8; // rax
  struct MIRACAST_CHUNK **v9; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
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
        v6 = MIRACAST_CHUNK_LIST::RemoveHead(*(MIRACAST_CHUNK_LIST **)(v3 + 3256));
        v7 = v6;
        if ( v6 )
        {
          *((_OWORD *)v6 + 1) = *(_OWORD *)(a2 + 16);
          *((_QWORD *)v6 + 4) = *(_QWORD *)(a2 + 32);
          *((_DWORD *)v6 + 10) = *(_DWORD *)(a2 + 48);
          memmove((char *)v6 + 44, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 48));
          v8 = *(_QWORD *)(v3 + 3264);
          v9 = *(struct MIRACAST_CHUNK ***)(v8 + 8);
          if ( *v9 != (struct MIRACAST_CHUNK *)v8 )
            __fastfail(3u);
          *(_QWORD *)v7 = v8;
          *((_QWORD *)v7 + 1) = v9;
          *v9 = v7;
          *(_QWORD *)(v8 + 8) = v7;
          ++*(_DWORD *)(v8 + 16);
        }
        else
        {
          WdLogSingleEntry1(3LL, v3);
          *(_BYTE *)(v3 + 3248) = 1;
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741811;
        WdLogSingleEntry2(2LL, v3, -1073741811LL);
        *(_BYTE *)(v3 + 3249) = 1;
      }
    }
  }
  else
  {
    v4 = -1073741811;
    WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 64), -1073741811LL);
  }
  *(_DWORD *)(a2 + 52) = v4;
}
