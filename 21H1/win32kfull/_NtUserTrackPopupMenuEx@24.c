/*
 * XREFs of _NtUserTrackPopupMenuEx@24 @ 0x16AB4F
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 */

int __stdcall NtUserTrackPopupMenuEx(int a1, int a2, int a3, int a4, int a5, _BYTE *a6)
{
  _BYTE *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  const void *v12; // eax
  int v14; // [esp+14h] [ebp-60h] BYREF
  int v15; // [esp+18h] [ebp-5Ch]
  int v16; // [esp+1Ch] [ebp-58h]
  int v17; // [esp+20h] [ebp-54h] BYREF
  int v18; // [esp+24h] [ebp-50h]
  int v19; // [esp+28h] [ebp-4Ch]
  _DWORD v20[2]; // [esp+30h] [ebp-44h] BYREF
  int v21; // [esp+38h] [ebp-3Ch]
  _BYTE *v22; // [esp+3Ch] [ebp-38h]
  int v23; // [esp+40h] [ebp-34h]
  _BYTE v24[24]; // [esp+44h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  v23 = a1;
  v6 = a6;
  v22 = a6;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  memset(v24, 0, 20);
  v7 = 0;
  EnterCrit(0, 1);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x3EC);
  }
  else
  {
    v8 = ValidateHmenu(v23);
    v21 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v20, v8);
    if ( !SmartObjStackRef<tagMENU>::operator==(v20, v9) )
    {
      v10 = ValidateHwnd(a5);
      if ( v10 )
      {
        v23 = _gptiCurrent;
        v17 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v17;
        v18 = v10;
        HMLockObject(v10);
        v11 = v21;
        if ( !v21 )
        {
          v11 = *(_DWORD *)v20[0];
          v6 = v22;
        }
        v14 = *(_DWORD *)(v23 + 228);
        *(_DWORD *)(v23 + 228) = &v14;
        v15 = v11;
        HMLockObject(v11);
        ms_exc.registration.TryLevel = 0;
        if ( v6 )
        {
          v12 = (const void *)_MmUserProbeAddress;
          if ( (unsigned int)v6 < _MmUserProbeAddress )
            v12 = v6;
          qmemcpy(v24, v12, 0x14u);
          v6 = v24;
          v22 = v24;
        }
        ms_exc.registration.TryLevel = -2;
        v7 = xxxTrackPopupMenuEx(v20, a2, a3, a4, v10, v6);
        ThreadUnlock1();
        ThreadUnlock1();
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v20);
  UserSessionSwitchLeaveCrit();
  return v7;
}
