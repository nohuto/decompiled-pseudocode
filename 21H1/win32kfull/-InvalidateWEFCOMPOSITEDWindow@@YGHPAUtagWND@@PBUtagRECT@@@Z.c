/*
 * XREFs of ?InvalidateWEFCOMPOSITEDWindow@@YGHPAUtagWND@@PBUtagRECT@@@Z @ 0x1533B5
 * Callers:
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YGXPAX00@Z @ 0x153436 (-NormalAPCInvalidateCOMPOSITEDWnd@@YGXPAX00@Z.c)
 *     _FlushWEFCOMPOSITEDDCEBounds@4 @ 0x15375C (_FlushWEFCOMPOSITEDDCEBounds@4.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall InvalidateWEFCOMPOSITEDWindow(int a1, int *a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  _BYTE v8[8]; // [esp+10h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-18h]
  int v10; // [esp+1Ch] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-10h]
  int v12; // [esp+24h] [ebp-Ch]
  int v13; // [esp+28h] [ebp-8h]

  v2 = 0;
  v9 = a1;
  v10 = *a2;
  v3 = *(_DWORD *)(a1 + 20);
  v11 = a2[1];
  v12 = a2[2];
  v13 = a2[3];
  v4 = *(_DWORD *)(v3 + 56);
  v5 = *(_DWORD *)(v3 + 52);
  v10 += v5;
  v12 += v5;
  v13 += v4;
  v11 += v4;
  v6 = GreCreateRectRgnIndirect(&v10);
  if ( v6 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
    xxxInternalInvalidate(v9, v6, 1157);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
    GreDeleteObject(v6);
    return 1;
  }
  return v2;
}
