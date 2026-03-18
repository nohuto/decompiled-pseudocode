/*
 * XREFs of _NtUserCheckProcessForClipboardAccess@8 @ 0x11072
 * Callers:
 *     <none>
 * Callees:
 *     ?InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z @ 0x1112C (-InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z.c)
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBX1IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YGJ011I2@ZPBX@@SGJPBU_tlgProvider_t@@PBX1ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@G@@@Z @ 0x15ECFC (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 */

int __stdcall NtUserCheckProcessForClipboardAccess(HANDLE ProcessId, ULONG a2)
{
  int v2; // esi
  _DWORD *ProcessWin32Process; // eax
  _DWORD *v4; // ebx
  int i; // edi
  _DWORD *v6; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // ecx
  const struct tagTHREADINFO *v14; // [esp+0h] [ebp-50h]
  int v15; // [esp+4h] [ebp-4Ch]
  _DWORD v16[3]; // [esp+10h] [ebp-40h] BYREF
  _DWORD *v17; // [esp+20h] [ebp-30h] BYREF
  int v18; // [esp+24h] [ebp-2Ch] BYREF
  char *v19; // [esp+28h] [ebp-28h] BYREF
  int v20; // [esp+2Ch] [ebp-24h]
  PVOID Object; // [esp+30h] [ebp-20h] BYREF
  int v22; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]
  _DWORD *ProcessIda; // [esp+58h] [ebp+8h]

  v22 = 0;
  Object = 0;
  v2 = 1;
  EnterSharedCrit(0, 1);
  if ( LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) >= 0
    && (ProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(Object),
        v4 = ProcessWin32Process,
        (ProcessIda = ProcessWin32Process) != 0) )
  {
    for ( i = ProcessWin32Process[45]; i; i = *(_DWORD *)(i + 364) )
    {
      v22 = InForegroundQueue(v14, v15);
      if ( v22 )
        break;
    }
    if ( !v22 && !*(_DWORD *)(PsGetCurrentProcessWin32Process() + 500) )
    {
      v8 = MEMORY[0xFFDF0004];
      v20 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v10 = MEMORY[0xFFDF0324];
        v11 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v10 = MEMORY[0xFFDF0324];
            v11 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v2 = 1;
          v4 = ProcessIda;
          v8 = v20;
        }
        v9 = v8 * (v10 << 8) + (((unsigned int)v8 * (unsigned __int64)v11) >> 24);
      }
      else
      {
        v9 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      v12 = v4[166];
      if ( v12 <= v9 )
        v22 = v9 - v12 <= 0xFA;
      if ( (unsigned int)dword_266258 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
      {
        v16[0] = 1;
        v16[1] = 0;
        v19 = (char *)(v4 + 146);
        v18 = v22;
        v17 = v16;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v13,
          &v17,
          &v18,
          &v19);
      }
    }
    ms_exc.registration.TryLevel = 0;
    v6 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v6 = (_DWORD *)_MmUserProbeAddress;
    *v6 = v22;
    ms_exc.registration.TryLevel = -2;
    ObfDereferenceObject(Object);
  }
  else
  {
    v2 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
