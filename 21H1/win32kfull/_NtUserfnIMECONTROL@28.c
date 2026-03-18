/*
 * XREFs of _NtUserfnIMECONTROL@28 @ 0x16B7D6
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _ProbeAndCaptureSoftKbdData@4 @ 0x14F275 (_ProbeAndCaptureSoftKbdData@4.c)
 */

int __stdcall NtUserfnIMECONTROL(int a1, int a2, unsigned int a3, unsigned int *a4, int a5, int a6, int a7)
{
  unsigned int *v7; // ebx
  int v8; // esi
  unsigned int *v9; // edi
  const void *v10; // esi
  _BYTE *v11; // edi
  int v13; // [esp-4h] [ebp-F0h]
  int v14; // [esp-4h] [ebp-F0h]
  _DWORD v15[5]; // [esp+10h] [ebp-DCh] BYREF
  int v16; // [esp+24h] [ebp-C8h]
  int v17; // [esp+28h] [ebp-C4h]
  unsigned int *v18; // [esp+2Ch] [ebp-C0h]
  unsigned int *v19; // [esp+30h] [ebp-BCh]
  unsigned int *v20; // [esp+34h] [ebp-B8h]
  _BYTE v21[92]; // [esp+38h] [ebp-B4h] BYREF
  _BYTE v22[32]; // [esp+94h] [ebp-58h] BYREF
  _BYTE v23[32]; // [esp+B4h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+D4h] [ebp-18h]

  v16 = a1;
  v7 = a4;
  v17 = a6;
  memset(v22, 0, sizeof(v22));
  memset(v23, 0, 0x1Cu);
  v8 = 0;
  memset(v21, 0, sizeof(v21));
  v19 = a4;
  memset(v15, 0, 12);
  v9 = 0;
  v20 = 0;
  v18 = 0;
  if ( a2 != 643 || a3 > 0x22 )
    return v8;
  ms_exc.registration.TryLevel = 0;
  if ( a3 <= 0xB )
  {
    if ( a3 == 11 )
    {
      if ( (unsigned int)a4 >= _MmUserProbeAddress )
        *(_DWORD *)_MmUserProbeAddress = 0;
      v14 = 7;
      goto LABEL_18;
    }
    if ( a3 == 7 )
    {
      if ( (unsigned int)a4 >= _MmUserProbeAddress )
        *(_DWORD *)_MmUserProbeAddress = 0;
      v14 = 8;
      goto LABEL_18;
    }
    if ( a3 != 8 )
    {
      if ( a3 != 9 )
      {
        if ( a3 != 10 )
          goto LABEL_36;
        v10 = (const void *)_MmUserProbeAddress;
        if ( (unsigned int)a4 < _MmUserProbeAddress )
          v10 = a4;
        v13 = 23;
        v11 = v21;
        v7 = (unsigned int *)v21;
        goto LABEL_34;
      }
      goto LABEL_28;
    }
    v10 = (const void *)_MmUserProbeAddress;
    if ( (unsigned int)a4 < _MmUserProbeAddress )
      v10 = a4;
    v13 = 8;
    v11 = v22;
    v7 = (unsigned int *)v22;
LABEL_34:
    qmemcpy(v11, v10, 4 * v13);
    v19 = v7;
    goto LABEL_35;
  }
  if ( a3 == 12 )
  {
    v10 = (const void *)_MmUserProbeAddress;
    if ( (unsigned int)a4 < _MmUserProbeAddress )
      v10 = a4;
    v13 = 7;
    v11 = v23;
    v7 = (unsigned int *)v23;
    goto LABEL_34;
  }
  if ( a3 != 17 )
  {
    if ( a3 == 24 )
    {
      v9 = ProbeAndCaptureSoftKbdData(a4);
      v18 = v9;
      if ( !v9 )
      {
        v15[4] = 0;
        ms_exc.registration.TryLevel = -2;
        return v8;
      }
      PushW32ThreadLock((int)v9, v15, (int)Win32FreePool);
      v7 = v9;
      v19 = v9;
    }
    goto LABEL_36;
  }
LABEL_28:
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  v14 = 23;
LABEL_18:
  qmemcpy(a4, a4, 4 * v14);
LABEL_35:
  v9 = v20;
LABEL_36:
  ms_exc.registration.TryLevel = -2;
  v8 = ((int (__stdcall *)(int, int, unsigned int, unsigned int *, int))mpFnidPfn[((_BYTE)v17 + 6) & 0x1F])(
         v16,
         643,
         a3,
         v7,
         a5);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((int)v15);
  return v8;
}
