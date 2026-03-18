/*
 * XREFs of _SendGestureMessage@28 @ 0x188A6B
 * Callers:
 *     _NtUserfnGESTURE@28 @ 0x16B71B (_NtUserfnGESTURE@28.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _AllocGestureInfo@16 @ 0x188710 (_AllocGestureInfo@16.c)
 *     _ValidateGestureInfo@4 @ 0x188C68 (_ValidateGestureInfo@4.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 */

int __fastcall SendGestureMessage(int a1, int a2, unsigned int a3, char *a4, int a5, unsigned int a6, _DWORD *a7)
{
  void *v8; // ebx
  char *v9; // esi
  volatile void *v10; // edx
  int v11; // ebx
  int v12; // edi
  void *v14; // [esp-4h] [ebp-A0h]
  SIZE_T v15[12]; // [esp+10h] [ebp-8Ch] BYREF
  int v16[12]; // [esp+40h] [ebp-5Ch] BYREF
  int v17; // [esp+78h] [ebp-24h]
  int v18; // [esp+7Ch] [ebp-20h]
  char *v19; // [esp+80h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+84h] [ebp-18h]
  char *v21; // [esp+A4h] [ebp+8h]
  unsigned int v22; // [esp+A8h] [ebp+Ch]

  v17 = a2;
  v18 = a1;
  v8 = 0;
  memset(v16, 0, sizeof(v16));
  v19 = 0;
  if ( !a1 || a1 == -1 || (v9 = a4) == 0 || a3 < 0x30 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  v22 = a3 - 48;
  ms_exc.registration.TryLevel = 0;
  v10 = v9 + 48;
  v21 = v9 + 48;
  if ( v9 + 48 < v9 || (unsigned int)v10 > _MmUserProbeAddress )
    v9 = (char *)_MmUserProbeAddress;
  qmemcpy(v15, v9, sizeof(v15));
  qmemcpy(v16, v15, sizeof(v16));
  if ( v15[10] != v22 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    ms_exc.registration.TryLevel = -2;
    return 0;
  }
  if ( v15[10] )
  {
    ProbeForRead(v10, v15[10], 1u);
    v8 = v21;
    v19 = v21;
  }
  ms_exc.registration.TryLevel = -2;
  if ( !ValidateGestureInfo(v16) )
    return 0;
  v14 = v8;
  v11 = v18;
  v12 = AllocGestureInfo(v18, 0, (size_t *)v16, v14);
  if ( !v12 )
    return 0;
  *a7 = ((int (__stdcall *)(int, int, SIZE_T, int, int))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(v11, v17, v15[2], v12, a5);
  if ( a6 >= 0x2AB && (a6 <= 0x2AC || a6 == 692) )
    _FreeGestureInfo(v12, 1);
  return 1;
}
