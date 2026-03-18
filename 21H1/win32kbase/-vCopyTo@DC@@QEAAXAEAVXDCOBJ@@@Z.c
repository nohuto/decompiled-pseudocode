/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000FC88
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C000FBF0 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C00804F0 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00C4B04 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00C4B60 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

void __fastcall DC::vCopyTo(DC *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _OWORD *v7; // rcx
  __int64 v8; // r14
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int64 v12; // rbp
  struct HPATH__ *v13; // rsi
  struct HPATH__ *v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  DC *v18; // rcx
  void *v19; // rcx
  _BYTE v20[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v21; // [rsp+28h] [rbp-90h]

  v2 = *(_QWORD *)a2;
  v5 = v2;
  v6 = *(_QWORD *)(v2 + 296);
  if ( v6 && v6 != v2 + 264 )
  {
    Win32FreePool(v6);
    v5 = *(_QWORD *)a2;
  }
  v7 = *(_OWORD **)(v5 + 976);
  v8 = 3LL;
  v9 = (_OWORD *)*((_QWORD *)this + 122);
  v10 = 3LL;
  do
  {
    *v7 = *v9;
    v7[1] = v9[1];
    v7[2] = v9[2];
    v7[3] = v9[3];
    v7[4] = v9[4];
    v7[5] = v9[5];
    v7[6] = v9[6];
    v7 += 8;
    v11 = v9[7];
    v9 += 8;
    *(v7 - 1) = v11;
    --v10;
  }
  while ( v10 );
  *v7 = *v9;
  v7[1] = v9[1];
  v7[2] = v9[2];
  v12 = *(_QWORD *)a2;
  v13 = (struct HPATH__ *)*((_QWORD *)this + 25);
  v14 = *(struct HPATH__ **)(*(_QWORD *)a2 + 200LL);
  if ( v13 != v14 )
  {
    if ( v14 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v20, v14);
      if ( v21 && (*(_DWORD *)(v21 + 84) & 1) == 0 )
        HmgDecrementShareReferenceCountEx(v21, 0LL);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v20);
    }
    *(_QWORD *)(v12 + 200) = v13;
    if ( v13 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v20, v13);
      if ( v21 && (*(_DWORD *)(v21 + 84) & 1) == 0 )
        HmgIncrementShareReferenceCount();
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v20);
    }
  }
  v15 = (_OWORD *)((char *)this + 80);
  v16 = (_OWORD *)(*(_QWORD *)a2 + 80LL);
  do
  {
    *v16 = *v15;
    v16[1] = v15[1];
    v16[2] = v15[2];
    v16[3] = v15[3];
    v16[4] = v15[4];
    v16[5] = v15[5];
    v16[6] = v15[6];
    v16 += 8;
    v17 = v15[7];
    v15 += 8;
    *(v16 - 1) = v17;
    --v8;
  }
  while ( v8 );
  *v16 = *v15;
  v16[1] = v15[1];
  v16[2] = v15[2];
  v16[3] = v15[3];
  v16[4] = v15[4];
  v18 = (DC *)*((_QWORD *)this + 37);
  if ( v18 == (DC *)((char *)this + 264) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 296LL) = *(_QWORD *)a2 + 264LL;
  }
  else if ( v18 )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 296LL) = PALLOCMEM2((unsigned int)(8 * *((_DWORD *)this + 76)));
    v19 = *(void **)(*(_QWORD *)a2 + 296LL);
    if ( v19 )
      memmove(v19, *((const void **)this + 37), 8LL * *((unsigned int *)this + 76));
    else
      *(_DWORD *)(*(_QWORD *)a2 + 304LL) = 0;
  }
}
