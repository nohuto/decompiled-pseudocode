/*
 * XREFs of _NtUserRegisterRawInputDevices@12 @ 0xC95A2
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 *     _LeaveEditionCrit@0 @ 0xCCA50 (_LeaveEditionCrit@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserRegisterRawInputDevices(volatile void *Address, unsigned int a2, size_t MaxCount)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int i; // ecx
  unsigned int v7; // esi
  _DWORD *v8; // ecx
  ULONG *v10; // [esp+0h] [ebp-54h]
  _DWORD v11[3]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v12[8]; // [esp+1Ch] [ebp-38h] BYREF
  int v13; // [esp+28h] [ebp-2Ch]
  int v14; // [esp+30h] [ebp-24h]
  int v15; // [esp+34h] [ebp-20h]
  int v16; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  char *Addressa; // [esp+5Ch] [ebp+8h]

  v3 = 0;
  v16 = 0;
  memset(v11, 0, sizeof(v11));
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  PsGetCurrentProcessWin32Process();
  v14 = _gptiCurrent;
  if ( Address && a2 && MaxCount == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 > 0x15555555 )
      ExRaiseAccessViolation();
    v15 = 12 * a2;
    ProbeForRead(Address, 12 * a2, 4u);
    if ( ULongLongToULong(12LL * a2, v10) >= 0 )
    {
      v4 = Win32AllocPoolWithQuota(0, 1769108309);
      v16 = v4;
      if ( !v4 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v4, v11, (int)Win32FreePool);
      ms_exc.registration.TryLevel = -2;
      v5 = gObjDummyLock;
      for ( i = 3; i; --i )
        v5 += 4;
      v7 = a2;
      v3 = _RegisterRawInputDevices(v4, a2, 0);
      v8 = (_DWORD *)(v4 + 4);
      Addressa = (char *)(v4 + 4);
      do
      {
        EtwTraceAuditApiRegisterRawInputDevices(
          v3,
          *((unsigned __int16 *)v8 - 2),
          *((unsigned __int16 *)v8 - 1),
          *v8,
          v8[1],
          v14,
          *(_DWORD *)(*(_DWORD *)v14 + 732),
          *(_DWORD *)(*(_DWORD *)v14 + 640),
          *(_DWORD *)(*(_DWORD *)v14 + 644),
          *(_DWORD *)(*(_DWORD *)v14 + 688));
        v8 = Addressa + 12;
        Addressa += 12;
        --v7;
      }
      while ( v7 );
      PopAndFreeAlwaysW32ThreadLock((int)v11);
    }
    else
    {
      v13 = 0;
      UserSetLastError((struct _NT_TIB *)0x57);
      ms_exc.registration.TryLevel = -2;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  LeaveEditionCrit();
  return v3;
}
