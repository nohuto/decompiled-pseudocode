/*
 * XREFs of ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C02D0A10
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02D1140 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009A84 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0050CA8 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectStartAdapter(struct _UNICODE_STRING *a1, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  unsigned __int16 *StartContext; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v20; // [rsp+40h] [rbp-18h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int16 *v22; // [rsp+78h] [rbp+20h] BYREF

  v22 = 0LL;
  v4 = a3;
  StartContext = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v22);
  v20 = 0LL;
  v22 = StartContext;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v20);
  if ( !StartContext )
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    v10 = -1073741801LL;
LABEL_9:
    *(_QWORD *)(v9 + 24) = v10;
    WdLogEvent5_WdError(v9);
    goto LABEL_11;
  }
  v11 = RtlStringCchCopyW(StartContext + 2, 0x104uLL, a1->Buffer);
  v14 = v11;
  if ( v11 >= 0 )
  {
    if ( (unsigned int)v4 <= 0x400 )
    {
      memmove(StartContext + 264, a2, v4);
      *((_DWORD *)StartContext + 131) = v4;
      *(_DWORD *)StartContext = 4;
      ThreadHandle = 0LL;
      v16 = PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              0LL,
              0LL,
              0LL,
              (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
              StartContext);
      v10 = v16;
      if ( v16 >= 0 )
      {
        v22 = 0LL;
        goto LABEL_11;
      }
      v9 = WdLogNewEntry5_WdError(v18, v17);
      goto LABEL_9;
    }
    LODWORD(v10) = -1073741811;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
    LODWORD(v10) = v14;
  }
LABEL_11:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v22);
  return (unsigned int)v10;
}
