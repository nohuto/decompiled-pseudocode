/*
 * XREFs of ?ValidateFbrHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_FBR@@@Z @ 0x1C0055454
 * Callers:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C00555D8 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall MOCKDRIVERSTATE::ValidateFbrHelper(MOCKDRIVERSTATE *this, struct _MOCKDRIVERSTATE_VALIDATE_FBR *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // ebp
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r14
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( *(_BYTE *)(v4 + 2761) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)this + 1) + 8LL) )
    {
      v5 = *(_DWORD *)a2;
      v6 = 0LL;
      v7 = *(_DWORD *)(v4 + 1544);
      v8 = *(_DWORD *)(v4 + 2632);
      if ( v5 )
      {
        while ( 1 )
        {
          v9 = 0LL;
          if ( v7 )
            break;
LABEL_10:
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            return;
        }
        while ( 1 )
        {
          v10 = 0;
          if ( v8 )
            break;
LABEL_9:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v7 )
            goto LABEL_10;
        }
        while ( 1 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)this + 16 * (10 * v9 + v10) + 56);
          if ( v11 )
          {
            if ( *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v6) == v11 )
              break;
          }
          if ( ++v10 >= v8 )
            goto LABEL_9;
        }
        v12 = (unsigned int)v9;
        WdLogSingleEntry3(2LL, *((_QWORD *)a2 + 2), (unsigned int)v9, v10);
        v14 = *((_QWORD *)a2 + 2);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          {
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              *((_QWORD *)a2 + 2),
              v14,
              v13,
              0LL,
              0,
              -1,
              L"Front buffer rendering detected for dxgprocess:0x%I64x on source:%u, plane:%u",
              *((_QWORD *)a2 + 2),
              v12,
              v10,
              0LL,
              0LL);
            v14 = *((_QWORD *)a2 + 2);
          }
        }
        *(_QWORD *)(*((_QWORD *)this + 1) + 96LL) = v14;
        *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) = v10;
        *(_BYTE *)(*((_QWORD *)this + 1) + 8LL) = 1;
        v15 = *((_QWORD *)this + 1);
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 3) + 24LL));
        *(_QWORD *)(v15 + 16) = -1LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)this + 1) + 24LL), DelayedWorkQueue);
      }
    }
  }
}
