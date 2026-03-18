/*
 * XREFs of ?Partition_Synchronize@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x180166FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::Partition_Synchronize(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SYNCHRONIZE *a4)
{
  LPVOID v6; // rax
  __int64 v7; // rdx
  void **v8; // rcx
  __int64 v9; // r8
  LPVOID v10; // rbx
  __int64 v11; // rax

  v6 = operator new(0x38uLL);
  v9 = 0LL;
  v10 = v6;
  if ( v6 )
  {
    v11 = *((_QWORD *)this + 12);
    v8 = &CResponseItem::`vftable';
    v7 = *((_QWORD *)a4 + 1);
    *(_QWORD *)v10 = &CResponseItem::`vftable';
    *((_QWORD *)v10 + 3) = v11;
    *((_DWORD *)v10 + 2) = 0;
    *((_DWORD *)v10 + 4) = 1;
    *((_WORD *)v10 + 16) = 0;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    *((_QWORD *)v10 + 5) = v7;
    *(_QWORD *)v10 = &CEventResponse::`vftable';
    *((_BYTE *)v10 + 48) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( *((_BYTE *)a4 + 16) )
      (*(void (__fastcall **)(_QWORD, LPVOID, _QWORD))(**((_QWORD **)this + 63) + 112LL))(
        *((_QWORD *)this + 63),
        v10,
        0LL);
    (*(void (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v7, v9);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, -2147024882, 0xC2u, 0LL);
    SetEvent(*((HANDLE *)a4 + 1));
    CloseHandle(*((HANDLE *)a4 + 1));
  }
  return 0LL;
}
