/*
 * XREFs of ?iCheckPassthroughImage@@YGHAAVDCOBJ@@AAVPDEVOBJ@@HHPAXH2@Z @ 0x1D7C6A
 * Callers:
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 * Callees:
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bSupportsJPEG@XDCOBJ@@QAEHXZ @ 0x1D7C13 (-bSupportsJPEG@XDCOBJ@@QAEHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QAEHXZ @ 0x1D7C26 (-bSupportsPNG@XDCOBJ@@QAEHXZ.c)
 */

int __userpurge iCheckPassthroughImage@<eax>(
        int a1@<edx>,
        XDCOBJ *a2@<ecx>,
        struct DCOBJ *a3,
        struct PDEVOBJ *a4,
        int *a5,
        unsigned int a6,
        _DWORD *a7,
        int a8,
        void *a9)
{
  int v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // eax
  const unsigned int *v15; // edx
  struct PALETTE *v16; // esi
  _DWORD *XlateObject; // eax
  int v18; // ecx
  _DWORD *v19; // edx
  _DWORD v21[13]; // [esp+10h] [ebp-68h] BYREF
  _DWORD *v22[2]; // [esp+44h] [ebp-34h] BYREF
  int v23; // [esp+4Ch] [ebp-2Ch]
  int v24; // [esp+50h] [ebp-28h]
  _DWORD *v25; // [esp+54h] [ebp-24h] BYREF
  struct PALETTE *v26; // [esp+58h] [ebp-20h]
  _DWORD *v27; // [esp+5Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v24 = a1;
  v10 = 0;
  if ( a3 == (struct DCOBJ *)8 )
  {
    ms_exc.registration.TryLevel = 0;
    v23 = *a5;
    ms_exc.registration.TryLevel = -2;
    if ( v23 == 4119 )
      v11 = XDCOBJ::bSupportsJPEG(a2);
    else
      v11 = XDCOBJ::bSupportsPNG(a2);
    if ( v11 && *(_DWORD *)(*(_DWORD *)v12 + 2204) )
      return 1;
  }
  else if ( *(_DWORD *)(*(_DWORD *)a1 + 2204) )
  {
    if ( a6 >= 4 && a7 )
    {
      v13 = *(_DWORD *)a2;
      v14 = *(_DWORD *)(*(_DWORD *)a2 + 504);
      v15 = 0;
      if ( v14 )
        v26 = *(struct PALETTE **)(v14 + 88);
      else
        v26 = 0;
      v16 = *(struct PALETTE **)(v13 + 60);
      v22[1] = 0;
      v22[0] = 0;
      v27 = 0;
      v25 = 0;
      if ( a3 == (struct DCOBJ *)4119 && XDCOBJ::bSupportsJPEG(a2)
        || a3 == (struct DCOBJ *)4120 && XDCOBJ::bSupportsPNG(a2) )
      {
        if ( PALMEMOBJ::bCreatePalette(
               (PALMEMOBJ *)v22,
               8u,
               (unsigned int)v15,
               v15,
               (unsigned int)v15,
               (unsigned int)v15,
               (unsigned int)v15,
               0x200u,
               1) )
        {
          XlateObject = CreateXlateObject(
                          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 264),
                          *(_DWORD *)(*(_DWORD *)a2 + 80),
                          v22[0],
                          v26,
                          (int)v16,
                          v16,
                          0,
                          0,
                          0xFFFFFF,
                          0);
          v25 = XlateObject;
          if ( XlateObject )
            v27 = XlateObject;
          else
            v10 = -1;
        }
        v15 = 0;
      }
      if ( v27 )
      {
        memset(v21, (int)v15, sizeof(v21));
        v18 = *(_DWORD *)a2;
        v19 = *(_DWORD *)(*(_DWORD *)a2 + 504) != 0 ? (_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 504) + 16) : 0;
        if ( !v19 )
        {
          v21[2] = *(_DWORD *)(v18 + 16);
          v21[3] = *(_DWORD *)(v18 + 36);
          LOWORD(v21[12]) = 1;
          v19 = v21;
        }
        v10 = 1;
        *a7 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD, bool, struct PDEVOBJ *, int *, unsigned int, _DWORD *))(*(_DWORD *)v24 + 2204))(
                v19,
                v27,
                0,
                a3 != (struct DCOBJ *)4119,
                a4,
                a5,
                a6,
                a7) != 0;
        ms_exc.registration.TryLevel = -2;
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v25);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v22);
    }
    else
    {
      return -1;
    }
  }
  return v10;
}
