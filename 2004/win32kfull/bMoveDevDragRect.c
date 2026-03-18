/*
 * XREFs of bMoveDevDragRect @ 0x1C0286698
 * Callers:
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C002032C (GreUpdateSprite.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(HDEV a1, int *a2, int *a3, __int64 a4)
{
  HDEV v5; // rsi
  int v6; // r12d
  int v8; // r9d
  int v9; // edx
  HDEV v10; // r13
  int v11; // r11d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // r15d
  int *v18; // r9
  _DWORD *v19; // r8
  int v20; // r10d
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // ebx
  HDEV v27; // r14
  int *v28; // rdi
  void **v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  void **v32; // rdi
  void *v34; // [rsp+58h] [rbp-79h]
  struct tagSIZE v35; // [rsp+88h] [rbp-49h] BYREF
  HDEV v36; // [rsp+90h] [rbp-41h] BYREF
  HDEV v37; // [rsp+98h] [rbp-39h]
  char v38[8]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-29h] BYREF
  char v40[8]; // [rsp+B0h] [rbp-21h] BYREF
  int v41; // [rsp+B8h] [rbp-19h] BYREF
  _DWORD v42[3]; // [rsp+BCh] [rbp-15h] BYREF
  int v43; // [rsp+C8h] [rbp-9h]
  int v44; // [rsp+CCh] [rbp-5h]
  int v45; // [rsp+D0h] [rbp-1h]
  int v46; // [rsp+D4h] [rbp+3h]
  int v47; // [rsp+D8h] [rbp+7h]
  int v48; // [rsp+DCh] [rbp+Bh]
  int v49; // [rsp+E0h] [rbp+Fh]
  int v50; // [rsp+E4h] [rbp+13h]
  int v51; // [rsp+E8h] [rbp+17h]
  int v52; // [rsp+ECh] [rbp+1Bh]
  int v53; // [rsp+F0h] [rbp+1Fh]
  int v54; // [rsp+F4h] [rbp+23h]

  v35 = 0LL;
  v5 = a1;
  v37 = a1;
  v6 = a4;
  v36 = a1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v40, ghsemDynamicModeChange, (__int64)a3, a4);
  v39 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v38, (struct PDEVOBJ *)&v36);
  v8 = a2[3];
  v9 = a2[1];
  v10 = v36;
  v11 = *a3;
  v12 = *((_DWORD *)v36 + 314);
  v41 = *a2;
  v42[2] = v8;
  v46 = v8;
  v54 = v8;
  v13 = a2[2];
  v14 = v13;
  v15 = a3[2];
  v45 = v13;
  v50 = v9 + v12;
  v16 = v8 - v12;
  v42[1] = v41 + v12;
  v17 = 0;
  v47 = v41 + v12;
  v51 = v41 + v12;
  v18 = v42;
  v42[0] = v9;
  v19 = v42;
  v43 = v14 - v12;
  v44 = v9;
  v20 = 4;
  v49 = v43;
  v48 = v9;
  v53 = v43;
  v52 = v16;
  do
  {
    v21 = *(v18 - 1);
    if ( v21 <= v11 )
      v21 = v11;
    *(v19 - 1) = v21;
    v22 = v18[1];
    if ( v22 >= v15 )
      v22 = v15;
    v19[1] = v22;
    if ( v21 < v22 )
    {
      v23 = *v18;
      if ( *v18 <= a3[1] )
        v23 = a3[1];
      v24 = a3[3];
      *v19 = v23;
      v25 = v18[2];
      if ( v25 >= v24 )
        v25 = v24;
      v19[2] = v25;
      if ( v23 < v25 )
      {
        v19 += 4;
        ++v17;
      }
    }
    v18 += 4;
    --v20;
  }
  while ( v20 );
  v26 = 0;
  if ( !v17 )
    goto LABEL_21;
  v27 = v37;
  v28 = &v41;
  v29 = (void **)(v10 + 304);
  do
  {
    v35.cx = v28[2] - *v28;
    v35.cy = v28[3] - v28[1];
    if ( *v29 )
    {
      LODWORD(v34) = 0x2000000;
      GreUpdateSprite(
        v27,
        0LL,
        *v29,
        0LL,
        (struct tagPOINT *)&v42[4 * v26 - 1],
        &v35,
        0LL,
        0LL,
        0,
        0LL,
        v34,
        0LL,
        0LL,
        v6,
        0);
    }
    ++v26;
    ++v29;
    v28 += 4;
  }
  while ( v26 < v17 );
  if ( v26 < 4 )
  {
    v5 = v37;
LABEL_21:
    v30 = v26;
    v31 = 4 - v26;
    v32 = (void **)(v10 + 2 * v30 + 304);
    do
    {
      if ( *v32 )
      {
        LODWORD(v34) = v6 != 0 ? 0x2000000 : 0;
        GreUpdateSprite(v5, 0LL, *v32, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, v34, 0LL, 0LL, v6, 0);
      }
      ++v32;
      --v31;
    }
    while ( v31 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v38);
  SEMOBJ::vUnlock((SEMOBJ *)&v39);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v40);
  return 1LL;
}
