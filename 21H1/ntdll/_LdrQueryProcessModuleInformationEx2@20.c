/*
 * XREFs of _LdrQueryProcessModuleInformationEx2@20 @ 0x4B32EAC0
 * Callers:
 *     _RtlQueryProcessModuleInformation@12 @ 0x4B337478 (_RtlQueryProcessModuleInformation@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrQueryProcessModuleInformationEx2@20 @ 0x4B32EAC0 (_LdrQueryProcessModuleInformationEx2@20.c)
 *     LdrpReadMemory @ 0x4B32F4DC (LdrpReadMemory.c)
 */

int __fastcall LdrQueryProcessModuleInformationEx2(
        _DWORD *a1,
        int a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5,
        int a6,
        int a7)
{
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // edi
  _WORD *v10; // ebx
  int v11; // eax
  int *v12; // esi
  int i; // eax
  int v14; // eax
  _DWORD *v15; // esi
  _DWORD v17[4]; // [esp+10h] [ebp-68h] BYREF
  int v18; // [esp+20h] [ebp-58h]
  int v19; // [esp+24h] [ebp-54h] BYREF
  _DWORD v20[3]; // [esp+28h] [ebp-50h] BYREF
  int v21; // [esp+34h] [ebp-44h]
  int v22; // [esp+38h] [ebp-40h]
  _WORD *v23; // [esp+3Ch] [ebp-3Ch]
  int v24; // [esp+40h] [ebp-38h]
  int v25; // [esp+44h] [ebp-34h]
  int v26; // [esp+48h] [ebp-30h] BYREF
  int v27; // [esp+4Ch] [ebp-2Ch]
  unsigned int v28; // [esp+50h] [ebp-28h]
  int v29; // [esp+54h] [ebp-24h] BYREF
  _DWORD *v30; // [esp+58h] [ebp-20h]
  int v31; // [esp+5Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v22 = a2;
  v7 = a1;
  v30 = a1;
  v8 = 2;
  v28 = 2;
  v17[0] = 0;
  v17[1] = LdrpProtectedCopyMemory;
  v17[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 >= 2 )
  {
    v10 = a3;
    *a3 = 0;
    v9 = 0;
  }
  else
  {
    v9 = -1073741820;
    v10 = 0;
  }
  v31 = v9;
  v23 = v10;
  if ( !v7 || (a2 & 2) != 0 )
  {
    v7 = v17;
    v30 = v17;
  }
  v20[1] = v7;
  v11 = 0;
  v12 = (int *)a5;
  while ( 1 )
  {
    v27 = v11;
    if ( v11 )
      return v9;
    v21 = 10240;
    v25 = 1;
    if ( v12 )
      *v12 = v8;
    if ( (a2 & 2) != 0 )
    {
      ((void (__thiscall *)(NTSTATUS (__stdcall *)()))LdrQueryModuleInfoLocalLoaderLock)(LdrQueryModuleInfoLocalLoaderLock);
      v11 = v27;
    }
    ms_exc.registration.TryLevel = 0;
    v24 = 20 * v11;
    i = ((int (__thiscall *)(int (__stdcall *)(int, int, int), _DWORD *, int *, _DWORD *))off_4B281898[5 * v11])(
          off_4B281898[5 * v11],
          v30,
          &v26,
          v20);
    if ( i < 0 )
    {
LABEL_32:
      v9 = i;
LABEL_33:
      v31 = v9;
    }
    else if ( v26 )
    {
      for ( i = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int *))((char *)&off_4B28189C + v24))(
                  *(int (__stdcall **)(int, int, int))((char *)&off_4B28189C + v24),
                  v30,
                  v26,
                  &v29);
            ;
            i = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int *))((char *)&off_4B28189C + v24))(
                  *(int (__stdcall **)(int, int, int))((char *)&off_4B28189C + v24),
                  v15,
                  v29,
                  &v29) )
      {
        if ( i < 0 )
          goto LABEL_32;
        if ( v29 == v26 )
          goto LABEL_34;
        v14 = v21;
        if ( !v21 )
        {
          v9 = -1073741271;
          goto LABEL_33;
        }
        --v21;
        v17[3] = v14 - 1;
        v28 += 300 * v25;
        v25 = 1;
        v18 = 1;
        if ( a4 < v28 )
          break;
        *v10 = 300;
        i = (*(int (__thiscall **)(_DWORD, _DWORD *, _WORD *, int, _DWORD, int))((char *)&off_4B2818A0 + v24))(
              *(int (__stdcall **)(int, int, int, int, char))((char *)&off_4B2818A0 + v24),
              v30,
              v10 + 2,
              v29,
              v20[0],
              v22);
        if ( i < 0 )
          goto LABEL_32;
        if ( !*((_DWORD *)v10 + 3) )
        {
          v25 = 0;
          v18 = 0;
          goto LABEL_29;
        }
        v15 = v30;
        i = LdrpReadMemory(&v19, 4);
        if ( i < 0 )
          goto LABEL_32;
        v20[2] = v19 + *((_DWORD *)v10 + 3);
        i = LdrpReadMemory(v10 + 146, 4);
        if ( i < 0 )
          goto LABEL_32;
        i = LdrpReadMemory(v10 + 144, 4);
        if ( i < 0 )
          goto LABEL_32;
        i = LdrpReadMemory(v10 + 148, 4);
        if ( i < 0 )
          goto LABEL_32;
        v10 += 150;
        v23 = v10;
        *v10 = 0;
LABEL_30:
        ;
      }
      v9 = -1073741820;
      v31 = -1073741820;
LABEL_29:
      v15 = v30;
      goto LABEL_30;
    }
LABEL_34:
    ms_exc.registration.TryLevel = -2;
    LOBYTE(a2) = v22;
    if ( (v22 & 2) != 0 )
    {
      ((void (__thiscall *)(_DWORD, int))*(&off_4B2818A8 + 5 * v27))(*(&off_4B2818A8 + 5 * v27), 1261628657);
      LOBYTE(a2) = v22;
    }
    v12 = (int *)a5;
    v8 = v28;
    if ( a5 )
      *a5 = v28;
    v11 = v27 + 1;
  }
}
