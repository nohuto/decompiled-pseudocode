/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0062134
 * Callers:
 *     CreateBitmapStrip @ 0x1C000B6D0 (CreateBitmapStrip.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C0101F0C (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(unsigned int a1)
{
  __int64 *v1; // rbx
  unsigned int v2; // esi
  HDC v3; // r14
  __int64 result; // rax
  __int64 v5; // rdi
  __int16 *v6; // rbp
  __int64 v7; // r12
  __int16 *v8; // rdi
  LONG v9; // ebx
  LONG v10; // r15d
  int v11; // r8d
  __int16 v12; // r9
  LONG v13; // eax
  HBRUSH v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  RECT v18; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0LL;
  v1 = (__int64 *)((char *)&gOemBitmapSet + 760 * a1);
  if ( a1 )
    v2 = 24 * (a1 + 3);
  else
    v2 = *(unsigned __int16 *)(gpsi + 6998LL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  EnsureOemBitmapInfoForDpiSlot((struct OEMBITMAPSET *)v1, v2);
  result = GreCreateCompatibleBitmapInternal(
             *(HDC *)(gpDispInfo + 56LL),
             *((_DWORD *)v1 + 2),
             *((_DWORD *)v1 + 3),
             0,
             0LL,
             0LL);
  v5 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(v3, v5);
    if ( *v1 )
      GreDeleteObject(*v1);
    *v1 = v5;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
    v6 = (__int16 *)&unk_1C02EA992;
    v7 = 93LL;
    v8 = (__int16 *)(v1 + 2);
    do
    {
      if ( v8[2] )
      {
        v9 = *v8;
        v10 = v8[1];
        v11 = (unsigned __int16)*(v6 - 1);
        v12 = *v6;
        v18.right = v9 + v8[2];
        v13 = v10 + v8[3];
        v18.left = v9;
        v18.top = v10;
        v18.bottom = v13;
        if ( v11 == 0xFFFF )
        {
          if ( (v12 & 1) != 0 )
          {
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
            {
              if ( (v12 & 0x100) != 0 )
                v14 = *(HBRUSH *)(gpsi + 4720LL);
              else
                v14 = *(HBRUSH *)(gpsi + 4712LL);
            }
            else if ( (v12 & 0x100) != 0 )
            {
              v14 = *(HBRUSH *)(gpsi + 4920LL);
            }
            else
            {
              v14 = *(HBRUSH *)(gpsi + 4912LL);
            }
            FillRect(v3, &v18, v14);
            BitBltSysBmp(v3, 0);
            GetDpiDependentMetric(12LL, v2, v15);
            BitBltSysBmp(v3, 0);
            GetDpiDependentMetric(12LL, v2, v16);
            BitBltSysBmp(v3, 0);
            GetDpiDependentMetric(12LL, v2, v17);
            BitBltSysBmp(v3, 0);
          }
        }
        else
        {
          DrawFrameControl(v3);
        }
      }
      v8 += 4;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
    return 1LL;
  }
  return result;
}
