/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C0008750
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C00283C8 (LockProcessByClientId.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00305BC (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F6814 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rsi
  __int64 i; // rbx
  int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  int v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0;
  v14 = 0;
  Object = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( (int)LockProcessByClientId(v3, &Object) >= 0
    && (ProcessWin32Process = PsGetProcessWin32Process(Object), (v6 = ProcessWin32Process) != 0) )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 656) )
    {
      v14 = InForegroundQueue((const struct tagTHREADINFO *)i, 1);
      if ( v14 )
        break;
    }
    if ( !v14 && !*(_DWORD *)(PsGetCurrentProcessWin32Process() + 884) )
    {
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v11 = *(_DWORD *)(v6 + 1084);
      if ( v11 <= (unsigned int)v10 )
      {
        LODWORD(v10) = v10 - v11;
        LOBYTE(v4) = (unsigned int)v10 <= 0xFA;
        v14 = v4;
      }
      if ( (unsigned int)dword_1C032B240 > 5
        && (qword_1C032B250 & 0x400000000000LL) != 0
        && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        v12 = v6 + 992;
        v15 = v14;
        v13 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v10,
          (unsigned int)&unk_1C02F0F5D,
          v9,
          (unsigned int)&v13,
          (__int64)&v15,
          (__int64)&v12);
      }
    }
    v4 = 1;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v14;
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
