/*
 * XREFs of ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800CC750
 * Callers:
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800CC71C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800CCF00 (-OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSharedSectionBase::UnmapSharedMemory(CSharedSectionBase *this)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  LPCVOID v8; // rcx
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  LPCVOID lpBaseAddress; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL));
  v4 = *((_QWORD *)this + 9);
  if ( !v2 )
  {
    v8 = (LPCVOID)*((_QWORD *)this + 9);
LABEL_12:
    UnmapViewOfFile(v8);
    return;
  }
  v5 = *((_QWORD *)this + 2);
  lpBaseAddress = (LPCVOID)*((_QWORD *)this + 9);
  v6 = *(_DWORD *)(v5 + 680);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v7 <= *(_DWORD *)(v5 + 676) )
    {
      *(_QWORD *)(*(_QWORD *)(v5 + 656) + 8LL * v6) = v4;
      *(_DWORD *)(v5 + 680) = v7;
      return;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 656, 8, 1, &lpBaseAddress);
    v9 = v10;
    if ( v10 >= 0 )
      return;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
  }
  if ( v9 < 0 )
  {
    v8 = lpBaseAddress;
    goto LABEL_12;
  }
}
