/*
 * XREFs of ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7CE8
 * Callers:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7CA8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUSuperWetStroke@CSuperWetInkManager@@XZ @ 0x1801A6E9C (--$emplace_back@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@C.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x1801A8314 (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801A87F0 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0pxt_EventWriteTransfer @ 0x1801A90B4 (McTemplateU0pxt_EventWriteTransfer.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedLocalInkReceived(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v6; // rbx
  __int64 v7; // r14
  int v8; // edx
  int v9; // ecx
  char v10; // bp

  v6 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
  v7 = *(_QWORD *)(*v5 + 496);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 328LL))(v4);
  }
  else
  {
    v10 = 1;
    v6 = (struct CSuperWetInkManager::SuperWetStroke *)std::vector<CSuperWetInkManager::SuperWetStroke>::emplace_back<>(v5 + 5);
    *(_QWORD *)v6 = a2;
  }
  *((_QWORD *)v6 + 11) = v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0pxt_EventWriteTransfer(v9, v8, (_DWORD)a2, v7, v10);
  if ( !*((_QWORD *)this + 1) || a2 == *((struct CSuperWetSource **)this + 1) || v10 )
    CSuperWetInkManager::SetActiveSource(this, v6);
}
