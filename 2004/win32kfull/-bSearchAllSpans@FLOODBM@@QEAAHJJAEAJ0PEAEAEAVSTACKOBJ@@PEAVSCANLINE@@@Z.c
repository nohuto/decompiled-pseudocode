/*
 * XREFs of ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C02B99DC
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B92F4 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02B9248 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02B9C0C (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02B9CD4 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 */

__int64 __fastcall FLOODBM::bSearchAllSpans(
        FLOODBM *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        struct STACKOBJ *a7,
        struct SCANLINE *a8)
{
  unsigned int v8; // ebx
  int v10; // edi
  unsigned int *v12; // rsi
  __int64 v13; // r13
  unsigned int v14; // r12d
  unsigned int v15; // eax
  int v16; // r10d
  STACKOBJ *v17; // r11
  bool v18; // zf
  unsigned int v19; // edx
  unsigned int v20; // ecx
  int *v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r8d
  unsigned int v28; // edx
  unsigned int v29; // r11d
  unsigned int *v30; // r9
  signed int v31; // r10d
  int *v32; // rdi
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rcx
  int *v36; // [rsp+68h] [rbp+20h]

  v36 = a4;
  v8 = 0;
  v10 = a2;
  v12 = (unsigned int *)*((_QWORD *)a7 + 2);
  v13 = v12[1];
  *((_QWORD *)this + 3) = a6;
  v14 = 8 * v13 + 24;
  if ( a2 < a3 )
  {
    while ( 1 )
    {
      v15 = FLOODBM::iColorGet(this, v10);
      if ( *((_DWORD *)this + 8) )
      {
        while ( v15 != v16 )
        {
          v18 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_12;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      else
      {
        while ( v15 == v16 )
        {
          v18 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_12;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      v18 = v10 == a3;
LABEL_12:
      if ( v18 )
      {
LABEL_29:
        a4 = v36;
        break;
      }
      if ( a8 )
      {
        v19 = *((_DWORD *)a8 + 1);
        v20 = 0;
        if ( v19 )
        {
          v21 = (int *)((char *)a8 + 28);
          while ( v10 >= *(v21 - 1) )
          {
            if ( v10 < *v21 )
            {
              v10 = *((_DWORD *)a8 + 2 * v20 + 7);
              goto LABEL_28;
            }
            ++v20;
            v21 += 2;
            if ( v20 >= v19 )
              break;
          }
        }
      }
      v22 = v12[1];
      v23 = 0;
      if ( v22 )
      {
        v24 = (int *)(v12 + 7);
        while ( v10 < *(v24 - 1) || v10 >= *v24 )
        {
          ++v23;
          v24 += 2;
          if ( v23 >= v22 )
            goto LABEL_24;
        }
        v10 = v12[2 * v23 + 7];
      }
      else
      {
LABEL_24:
        v14 += 8;
        if ( v14 > v12[2] )
        {
          if ( !(unsigned int)STACKOBJ::bExpandScanline(v17, v14, 0) )
            return 0LL;
          v12 = (unsigned int *)*((_QWORD *)a7 + 2);
        }
        FLOODBM::vFindExtent(this, v10, (int *)&v12[2 * v12[1] + 6], (int *)&v12[2 * v12[1] + 7]);
        v25 = v12[1];
        v10 = v12[2 * v25 + 7] + 1;
        v12[1] = v25 + 1;
      }
LABEL_28:
      if ( v10 >= a3 )
        goto LABEL_29;
    }
  }
  v26 = v12[1];
  if ( (_DWORD)v13 == v26 )
  {
    *a5 = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = v12[2 * v13 + 6];
    *a5 = v12[2 * v26 + 5];
    if ( v26 != 1 )
    {
      do
      {
        v28 = v8;
        v29 = v8;
        v30 = &v12[2 * v8];
        v31 = v30[6];
        if ( v8 < v26 )
        {
          v32 = (int *)(v30 + 6);
          do
          {
            v33 = *v32;
            v34 = v29;
            v32 += 2;
            if ( v33 >= v31 )
              v34 = v28;
            ++v29;
            v28 = v34;
            if ( v33 >= v31 )
              v33 = v31;
            v31 = v33;
          }
          while ( v29 < v26 );
          if ( v8 != (_DWORD)v34 )
          {
            v35 = *((_QWORD *)v30 + 3);
            *((_QWORD *)v30 + 3) = *(_QWORD *)&v12[2 * v34 + 6];
            *(_QWORD *)&v12[2 * (unsigned int)v34 + 6] = v35;
          }
        }
        v26 = v12[1];
        ++v8;
      }
      while ( v8 < v26 - 1 );
    }
  }
  return 1LL;
}
