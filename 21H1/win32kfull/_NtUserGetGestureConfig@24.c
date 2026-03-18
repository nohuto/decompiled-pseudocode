/*
 * XREFs of _NtUserGetGestureConfig@24 @ 0x162A22
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GetGestureConfigSettings@24 @ 0x1887F4 (_GetGestureConfigSettings@24.c)
 */

int __stdcall NtUserGetGestureConfig(int a1, int a2, int a3, ULONG a4, volatile void *Address, int a6)
{
  int GestureConfigSettings; // esi
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned int *v10; // ecx
  unsigned int v11; // eax
  SIZE_T v12; // ebx
  void *v13; // edi
  int v14; // ecx
  int v16; // [esp-4h] [ebp-60h]
  int v17; // [esp+10h] [ebp-4Ch] BYREF
  int v18; // [esp+14h] [ebp-48h]
  int v19; // [esp+18h] [ebp-44h]
  _BYTE v20[8]; // [esp+1Ch] [ebp-40h] BYREF
  _DWORD v21[2]; // [esp+3Ch] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]
  int v23; // [esp+64h] [ebp+8h]

  GestureConfigSettings = 0;
  v21[0] = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v7 = ValidateHwnd(a1);
  v23 = v7;
  if ( v7 )
  {
    v17 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v17;
    v18 = v7;
    HMLockObject(v7);
    if ( a6 != 12 )
      goto LABEL_3;
    if ( (a3 & 0xFFFFFFFE) != 0 )
    {
      v8 = 1004;
      goto LABEL_21;
    }
    v9 = *(_DWORD *)(v7 + 20);
    if ( *(char *)(v9 + 12) < 0 || *(char *)(v9 + 11) < 0 )
    {
      v8 = 1400;
      goto LABEL_21;
    }
    if ( !Address )
      goto LABEL_3;
    ms_exc.registration.TryLevel = 0;
    v10 = (unsigned int *)a4;
    if ( a4 >= _MmUserProbeAddress )
      v10 = (unsigned int *)_MmUserProbeAddress;
    v11 = *v10;
    v21[0] = v11;
    ms_exc.registration.TryLevel = -2;
    if ( v11 <= 0x100 && v11 )
    {
      v12 = 12 * v11;
      v13 = (void *)Win32AllocPoolWithQuota(12 * v11, 1667724117);
      v21[1] = v13;
      if ( v13 )
      {
        ms_exc.registration.TryLevel = 1;
        ProbeForWrite(Address, v12, 1u);
        memcpy(v13, (const void *)Address, v12);
        ms_exc.registration.TryLevel = -2;
        GestureConfigSettings = GetGestureConfigSettings(v23, a3, v21, v13, v14);
        if ( GestureConfigSettings )
        {
          ms_exc.registration.TryLevel = 2;
          memcpy((void *)Address, v13, v12);
          ms_exc.registration.TryLevel = -2;
        }
        if ( v13 )
          Win32FreePool(v13);
        goto LABEL_22;
      }
      v16 = 8;
    }
    else
    {
LABEL_3:
      v16 = 87;
    }
    v8 = v16;
LABEL_21:
    UserSetLastError((struct _NT_TIB *)v8);
LABEL_22:
    ThreadUnlock1();
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit();
  return GestureConfigSettings;
}
