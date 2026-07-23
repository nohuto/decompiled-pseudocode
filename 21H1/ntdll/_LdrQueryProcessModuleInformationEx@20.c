/*
 * XREFs of _LdrQueryProcessModuleInformationEx@20 @ 0x4B32ED46
 * Callers:
 *     _LdrQueryProcessModuleInformation@12 @ 0x4B32EAB0 (_LdrQueryProcessModuleInformation@12.c)
 *     _RtlQueryProcessModuleInformation@12 @ 0x4B337478 (_RtlQueryProcessModuleInformation@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrQueryProcessModuleInformationEx@20 @ 0x4B32ED46 (_LdrQueryProcessModuleInformationEx@20.c)
 */

int __fastcall LdrQueryProcessModuleInformationEx(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        int a6,
        int a7)
{
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // ebx
  int *v11; // eax
  int i; // eax
  int v13; // esi
  int v14; // eax
  int v15; // edx
  _DWORD v17[4]; // [esp+10h] [ebp-60h] BYREF
  int v18; // [esp+20h] [ebp-50h]
  _DWORD v19[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v20; // [esp+30h] [ebp-40h]
  int v21; // [esp+34h] [ebp-3Ch]
  int v22; // [esp+38h] [ebp-38h] BYREF
  int v23; // [esp+3Ch] [ebp-34h] BYREF
  unsigned int v24; // [esp+40h] [ebp-30h]
  int v25; // [esp+44h] [ebp-2Ch]
  _DWORD *v26; // [esp+48h] [ebp-28h]
  int v27; // [esp+4Ch] [ebp-24h]
  _DWORD *v28; // [esp+50h] [ebp-20h]
  int v29; // [esp+54h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  v25 = a2;
  v7 = a1;
  v28 = a1;
  v8 = 4;
  v24 = 4;
  v17[0] = 0;
  v17[1] = LdrpProtectedCopyMemory;
  v17[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 >= 4 )
  {
    *a3 = 0;
    v26 = a3 + 1;
    v9 = 0;
    LOBYTE(a2) = v25;
  }
  else
  {
    v9 = -1073741820;
    v26 = 0;
  }
  v29 = v9;
  if ( !v7 || (a2 & 2) != 0 )
  {
    v7 = v17;
    v28 = v17;
  }
  v19[2] = v7;
  v10 = 0;
  v11 = (int *)a5;
  while ( 1 )
  {
    v19[1] = v10;
    if ( v10 )
      return v9;
    v20 = 10240;
    v27 = 1;
    if ( v11 )
      *v11 = v8;
    if ( (a2 & 2) != 0 )
      ((void (__thiscall *)(NTSTATUS (__stdcall *)()))LdrQueryModuleInfoLocalLoaderLock)(LdrQueryModuleInfoLocalLoaderLock);
    ms_exc.registration.TryLevel = 0;
    v21 = 0;
    i = ((int (__thiscall *)(int (__stdcall *)(int, _DWORD *, _DWORD *), _DWORD *, int *, _DWORD *))LdrQueryInLoadOrderModuleList)(
          LdrQueryInLoadOrderModuleList,
          v28,
          &v23,
          v19);
    if ( i >= 0 )
    {
      if ( !v23 )
        goto LABEL_30;
      for ( i = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int *))((char *)&off_4B28189C + v21))(
                  *(int (__stdcall **)(int, int, int))((char *)&off_4B28189C + v21),
                  v28,
                  v23,
                  &v22);
            i >= 0;
            i = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int *))((char *)&off_4B28189C + v21))(
                  *(int (__stdcall **)(int, int, int))((char *)&off_4B28189C + v21),
                  v28,
                  v13,
                  &v22) )
      {
        v13 = v22;
        if ( v22 == v23 )
          goto LABEL_30;
        v14 = v20;
        if ( !v20 )
        {
          v9 = -1073741271;
          goto LABEL_29;
        }
        --v20;
        v17[3] = v14 - 1;
        v24 += 284 * v27;
        v15 = 1;
        v27 = 1;
        v18 = 1;
        if ( a4 >= v24 )
        {
          i = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, _DWORD, int))((char *)&off_4B2818A0 + v21))(
                *(int (__stdcall **)(int, int, int, int, char))((char *)&off_4B2818A0 + v21),
                v28,
                v26,
                v22,
                v19[0],
                v25);
          if ( i < 0 )
            break;
          v15 = v26[2] != 0 ? v27 : 0;
          v27 = v15;
          v18 = v15;
          v26 += 71 * v15;
          v13 = v22;
        }
        else
        {
          v9 = -1073741820;
          v29 = -1073741820;
        }
        if ( a3 && a4 >= 0x120 )
          *a3 += v15;
      }
    }
    v9 = i;
LABEL_29:
    v29 = v9;
LABEL_30:
    ms_exc.registration.TryLevel = -2;
    LOBYTE(a2) = v25;
    if ( (v25 & 2) != 0 )
    {
      ((void (__thiscall *)(NTSTATUS (__thiscall *)(void *), int))LdrQueryModuleInfoLocalLoaderUnlock)(
        LdrQueryModuleInfoLocalLoaderUnlock,
        1261629193);
      LOBYTE(a2) = v25;
    }
    v11 = (int *)a5;
    v8 = v24;
    if ( a5 )
      *a5 = v24;
    v10 = 1;
  }
}
