/*
 * XREFs of _NtUserGetPointerDeviceProperties@12 @ 0x163FC7
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserGetPointerDeviceProperties(int a1, int *a2, volatile void *Address)
{
  int v3; // esi
  int *v4; // edi
  unsigned int v5; // ebx
  int *v6; // ecx
  int v7; // ecx
  int v8; // esi
  size_t v9; // ebx
  const void *v10; // eax
  const void *v11; // ebx
  int v13; // [esp-4h] [ebp-5Ch]
  ULONG *v14; // [esp+0h] [ebp-58h]
  _BYTE v15[8]; // [esp+10h] [ebp-48h] BYREF
  int v16; // [esp+1Ch] [ebp-3Ch]
  size_t MaxCount; // [esp+28h] [ebp-30h]
  const void *v18; // [esp+30h] [ebp-28h]
  unsigned int v19; // [esp+34h] [ebp-24h]
  int v20; // [esp+38h] [ebp-20h] BYREF
  int v21; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]
  int v23; // [esp+60h] [ebp+8h]
  int v24; // [esp+64h] [ebp+Ch]

  v19 = 0;
  v18 = 0;
  v20 = 0;
  v3 = 1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  if ( !a1 || (v4 = a2) == 0 )
  {
    v3 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_33;
  }
  if ( !ResolveMouseOrPointerDevice(a1, &v20, 0) )
  {
    v3 = 0;
    UserSetLastError((struct _NT_TIB *)6);
    goto LABEL_30;
  }
  v5 = *(_DWORD *)(v20 + 312);
  v24 = v5;
  if ( !Address )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)v4 >= _MmUserProbeAddress )
      v4 = (int *)_MmUserProbeAddress;
    *v4 = v5;
    v21 = 1;
    goto LABEL_29;
  }
  ms_exc.registration.TryLevel = 1;
  v6 = v4;
  if ( (unsigned int)v4 >= _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  v23 = *v6;
  if ( *v6 < v5 )
  {
    if ( (unsigned int)v4 >= _MmUserProbeAddress )
      v4 = (int *)_MmUserProbeAddress;
    *v4 = v5;
    v13 = 122;
    goto LABEL_15;
  }
  v8 = v23 - *(_DWORD *)(v20 + 872);
  v16 = v8;
  if ( ULongLongToULong(28LL * (unsigned int)v23, v14) < 0 || !v8 )
    goto LABEL_27;
  if ( v19 < 0x2710000 )
  {
    v9 = 28 * v5;
    MaxCount = v9;
    ProbeForWrite(Address, v9, 4u);
    if ( v9 - 1 > 0x270FFFF )
    {
      v7 = 1359;
      goto LABEL_16;
    }
    v10 = (const void *)Win32AllocPoolZInit(v9, 1668313941);
    v11 = v10;
    v18 = v10;
    if ( v10 )
    {
      v3 = RIMGetPointerDeviceProperties(v20, v24, v10, v8);
      v21 = v3;
      if ( v3 )
      {
        memcpy((void *)Address, v11, MaxCount);
        if ( (unsigned int)v4 >= _MmUserProbeAddress )
          v4 = (int *)_MmUserProbeAddress;
        *v4 = v24;
        goto LABEL_29;
      }
LABEL_27:
      v13 = 87;
      goto LABEL_15;
    }
  }
  v13 = 8;
LABEL_15:
  v7 = v13;
LABEL_16:
  v3 = 0;
  v21 = 0;
  UserSetLastError((struct _NT_TIB *)v7);
LABEL_29:
  ms_exc.registration.TryLevel = -2;
LABEL_30:
  if ( v18 )
    Win32FreePool(v18);
LABEL_33:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit();
  return v3;
}
