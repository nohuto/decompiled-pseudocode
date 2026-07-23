/*
 * XREFs of PiDqObjectManagerHandleObjectEvent @ 0x140766958
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x140628F1C (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14072DAB4 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x140766ABC (PiDqObjectActionQueueEntryCreate.c)
 */

void __fastcall PiDqObjectManagerHandleObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // esi
  char v4; // bp
  int v7; // ecx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  v10 = 0LL;
  v4 = 0;
  if ( (v2 & 2) != 0 )
    PiDqDeleteUserObjectFromLoadedHives(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
      *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL));
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v7 = *(_DWORD *)(a1 + 228);
  if ( (v7 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v3 = PiDqObjectActionQueueEntryCreate(a2, &v10);
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v8 = *(_QWORD **)(a1 + 216);
      if ( *v8 != a1 + 208 )
        __fastfail(3u);
      v9 = v10;
      *v10 = a1 + 208;
      v9[1] = v8;
      *v8 = v9;
      *(_QWORD *)(a1 + 216) = v9;
    }
    v7 = *(_DWORD *)(a1 + 228);
  }
  if ( (v7 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v3 < 0) )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 228) = v7 | 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v4 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
