/*
 * XREFs of _NtUserfnTOUCHHITTESTING@28 @ 0x16D60A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnTOUCHHITTESTING(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  const void *v7; // esi
  int v9; // [esp+0h] [ebp-94h]
  int v10; // [esp+4h] [ebp-90h]
  int v11; // [esp+8h] [ebp-8Ch]
  int v12; // [esp+Ch] [ebp-88h]
  _DWORD v13[13]; // [esp+10h] [ebp-84h] BYREF
  int v14; // [esp+44h] [ebp-50h]
  _BYTE v15[52]; // [esp+48h] [ebp-4Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]

  v14 = a6;
  memset(v15, 0, 0x30u);
  ms_exc.registration.TryLevel = 0;
  v7 = (const void *)a4;
  if ( a4 + 48 < a4 || a4 + 48 > _MmUserProbeAddress )
    v7 = (const void *)_MmUserProbeAddress;
  qmemcpy(v13, v7, 0x30u);
  qmemcpy(v15, v13, 0x30u);
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, _BYTE *, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))mpFnidPfn[((_BYTE)v14 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v15,
           a5,
           v9,
           v10,
           v11,
           v12,
           v13[0],
           v13[1],
           v13[2],
           v13[3],
           v13[4],
           v13[5],
           v13[6],
           v13[7],
           v13[8],
           v13[9],
           v13[10],
           v13[11],
           v13[12],
           v14);
}
