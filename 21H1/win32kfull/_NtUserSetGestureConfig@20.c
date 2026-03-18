/*
 * XREFs of _NtUserSetGestureConfig@20 @ 0xE31F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SetGestureConfigSettings@20 @ 0xE3454 (_SetGestureConfigSettings@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserSetGestureConfig(SIZE_T Length, int a2, unsigned int a3, volatile void *Address, int a5)
{
  int v5; // esi
  unsigned int *v6; // ebx
  unsigned int v7; // eax
  void *v8; // edi
  int v9; // ecx
  int v11; // ecx
  int v12; // [esp-4h] [ebp-48h]
  int v13; // [esp+10h] [ebp-34h] BYREF
  unsigned int *v14; // [esp+14h] [ebp-30h]
  int v15; // [esp+18h] [ebp-2Ch]
  _BYTE v16[8]; // [esp+1Ch] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]
  int Lengtha; // [esp+4Ch] [ebp+8h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v5 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  v6 = (unsigned int *)ValidateHwnd(Length);
  if ( v6 )
  {
    v13 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v13;
    v14 = v6;
    HMLockObject(v6);
    if ( Address && a5 == 12 && a3 <= 0x100 && a3 )
    {
      v7 = v6[5];
      if ( *(char *)(v7 + 12) < 0
        || *(char *)(v7 + 11) < 0
        || *(_DWORD *)(_gptiCurrent + 232) != *(_DWORD *)(v6[2] + 232) )
      {
        v11 = 1400;
LABEL_17:
        UserSetLastError((struct _NT_TIB *)v11);
        goto LABEL_11;
      }
      Lengtha = 12 * a3;
      v8 = (void *)Win32AllocPoolWithQuota(12 * a3, 1667724117);
      if ( v8 )
      {
        ms_exc.registration.TryLevel = 0;
        ProbeForRead(Address, Lengtha, 1u);
        memcpy(v8, (const void *)Address, Lengtha);
        ms_exc.registration.TryLevel = -2;
        v5 = SetGestureConfigSettings(v6, a3, (struct tagWND *)v8, v9);
        Win32FreePool(v8);
LABEL_11:
        ThreadUnlock1();
        goto LABEL_12;
      }
      v12 = 8;
    }
    else
    {
      v12 = 87;
    }
    v11 = v12;
    goto LABEL_17;
  }
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  UserSessionSwitchLeaveCrit();
  return v5;
}
