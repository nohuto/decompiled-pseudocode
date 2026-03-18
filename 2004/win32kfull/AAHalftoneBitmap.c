/*
 * XREFs of AAHalftoneBitmap @ 0x1C00D5470
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00D5194 (HT_HalftoneBitmap.c)
 * Callees:
 *     SetGrayColorTable @ 0x1C0008990 (SetGrayColorTable.c)
 *     ValidateHTSI @ 0x1C00D573C (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x1C00D5B24 (CreateDyesColorMappingTable.c)
 *     SetupAAHeader @ 0x1C00D70EC (SetupAAHeader.c)
 *     InitializeFUDI @ 0x1C0128658 (InitializeFUDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     GetDstBFInfo @ 0x1C0262618 (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x1C0263454 (FindBGRMapCache.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // r13
  __int64 v4; // rdi
  int v5; // ebx
  _BYTE *v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r14d
  unsigned __int8 v9; // si
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // r14d
  int v14; // r12d
  char v15; // r12
  __int64 (__fastcall *v16)(int, int, int, int, __int64); // rcx
  __int64 (__fastcall *v17)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v18; // zf
  unsigned __int8 v20; // r14
  __int64 v21; // rax
  _OWORD *v22; // rdx
  _OWORD *v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  bool v26; // zf
  __int64 (__fastcall *v27)(int, int, int, int, __int64, __int64, __int64, int); // rax
  int v28; // ecx
  char v29; // al
  char v30; // al
  char v31; // cl
  char v32; // al
  bool v33; // zf
  __int64 (__fastcall *v34)(int, int, int, int, __int64, __int64, __int64, int, __int64); // rax
  __int64 v35; // r11
  void *v36; // r10
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  char v39; // al
  char v40; // al
  __int64 v41; // rcx
  int v42; // [rsp+20h] [rbp-38h]
  void *v43; // [rsp+28h] [rbp-30h]
  __int64 v44; // [rsp+30h] [rbp-28h]
  __int64 (__fastcall *v45)(__int64); // [rsp+38h] [rbp-20h] BYREF
  __int64 v46; // [rsp+40h] [rbp-18h]
  int DyesColorMappingTable; // [rsp+A0h] [rbp+48h]
  __int16 v48; // [rsp+B0h] [rbp+58h]
  int v49; // [rsp+B8h] [rbp+60h]

  v1 = *a1;
  v45 = 0LL;
  v3 = a1[1];
  v4 = a1[6];
  v44 = v1;
  v5 = ValidateHTSI(a1, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ValidateHTSI(a1, 1LL);
    if ( v5 >= 0 )
    {
      v5 = ValidateHTSI(a1, 2LL);
      if ( v5 >= 0 )
      {
        v5 = SetupAAHeader(a1, v1, v4, &v45);
        if ( v5 > 0 )
        {
          DyesColorMappingTable = CreateDyesColorMappingTable(a1);
          v8 = DyesColorMappingTable;
          if ( DyesColorMappingTable <= 0 )
            goto LABEL_100;
          v43 = 0LL;
          v9 = *(_BYTE *)(v3 + 31);
          v10 = *(_DWORD *)(v3 + 56) & 0x2000000;
          v11 = *(_DWORD *)v4;
          v12 = *(_DWORD *)(v4 + 444);
          v46 = *(_QWORD *)(v4 + 136);
          v42 = 1;
          v48 = v11;
          v13 = *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL);
          v49 = v10;
          if ( v10 )
            v43 = (void *)(v44 + 548);
          v14 = v11 & 0x800;
          if ( v11 < 0 )
          {
            v42 = 0;
            v18 = v14 == 0;
            v15 = v11;
            if ( !v18 )
            {
              v21 = *(_QWORD *)(v44 + 7064);
              *(_QWORD *)(v4 + 336) = v21;
              if ( (v11 & 0x1000) != 0 )
                *(_QWORD *)(v4 + 336) = v21 + 768;
            }
          }
          else
          {
            memmove(*(void **)(v4 + 376), (const void *)(v44 + 856), 0xC1CuLL);
            v18 = v14 == 0;
            v15 = v48;
            if ( !v18 )
            {
              v22 = *(_OWORD **)(v44 + 7064);
              v23 = *(_OWORD **)(v4 + 336);
              if ( (v48 & 0x1000) != 0 )
              {
                memmove(*(void **)(v4 + 336), v22 + 48, 0x800uLL);
              }
              else
              {
                v24 = 6LL;
                do
                {
                  *v23 = *v22;
                  v23[1] = v22[1];
                  v23[2] = v22[2];
                  v23[3] = v22[3];
                  v23[4] = v22[4];
                  v23[5] = v22[5];
                  v23[6] = v22[6];
                  v23 += 8;
                  v25 = v22[7];
                  v22 += 8;
                  *(v23 - 1) = v25;
                  --v24;
                }
                while ( v24 );
              }
            }
            EngReleaseSemaphore(*(HSEMAPHORE *)(v44 + 8));
          }
          if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
            SetGrayColorTable(*(_OWORD **)(v4 + 384), v4 + 8);
          if ( *(_DWORD *)(v4 + 528) )
            InitializeFUDI(v4);
          *(_QWORD *)(v4 + 560) -= 4LL;
          if ( v9 > 0xF9u )
          {
            if ( v9 == 0xFA )
            {
              v33 = v49 == 0;
              v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332;
              v34 = OutputAATo8BPP_B332_XLATE;
LABEL_94:
              if ( !v33 )
                v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))v34;
              goto LABEL_38;
            }
            if ( v9 == 0xFB )
            {
              BYTE1(v43) = *(_BYTE *)(*(_QWORD *)(v4 + 376) + 17LL);
              v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
LABEL_38:
              v8 = DyesColorMappingTable;
              goto LABEL_24;
            }
            if ( v9 <= 0xFDu )
            {
              v39 = (char)v43;
              if ( (v46 & 3) != 0 )
                v39 = 1;
              LOBYTE(v43) = v39;
              v40 = v13 - 1;
              if ( (v46 & 3) == 0 )
                v40 = v13;
              if ( (v40 & 1) != 0 )
              {
                *(_QWORD *)(v4 + 568) -= 4LL;
                BYTE3(v43) = 1;
              }
              if ( (_BYTE)v12 )
              {
                v8 = DyesColorMappingTable;
                if ( (_BYTE)v12 == 4 )
                {
                  v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
                  v18 = v9 == 0xFD;
                  v17 = OutputAATo16BPP_565_BGR;
LABEL_22:
                  if ( !v18 )
                    v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))v17;
                  goto LABEL_24;
                }
                v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
                goto LABEL_24;
              }
              v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
              v26 = v9 == 0xFD;
              v27 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
              goto LABEL_52;
            }
            if ( v9 == 0xFE )
            {
              v35 = a1[7];
              v6 = *(_BYTE **)(v4 + 400);
              if ( v35 )
              {
                v36 = *(void **)(v4 + 400);
                if ( v6 )
                {
                  v37 = (unsigned __int8 *)&VGA256Xlate;
                  LODWORD(v7) = 366;
                  do
                  {
                    v38 = *v37++;
                    *v6++ = *(_BYTE *)(v38 + v35);
                    v18 = (_DWORD)v7 == 1;
                    v7 = (unsigned int)(v7 - 1);
                  }
                  while ( !v18 );
                }
              }
              else
              {
                v36 = &VGA256Xlate;
              }
              v43 = v36;
              v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
              goto LABEL_38;
            }
          }
          else
          {
            if ( v9 >= 0xF8u )
              goto LABEL_60;
            switch ( v9 )
            {
              case 1u:
                BYTE1(v43) = -((v15 & 4) == 0);
                if ( *(_BYTE *)(v4 + 97) )
                {
                  v28 = 8 - *(unsigned __int8 *)(v4 + 97);
                  v29 = v13;
                  v13 -= v28;
                  if ( v13 < 0 )
                  {
                    LOBYTE(v28) = v29;
                    BYTE2(v43) = -(char)v13;
                    LOBYTE(v13) = 0;
                  }
                  LOBYTE(v43) = v28;
                }
                v20 = v13 & 7;
                BYTE3(v43) = v20;
                if ( v20 )
                  *(_QWORD *)(v4 + 568) += -4LL * v20;
                v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
                goto LABEL_38;
              case 5u:
                v8 = DyesColorMappingTable;
                *(_WORD *)((char *)&v43 + 1) = v12 >> 8;
                BYTE3(v43) = HIBYTE(v12);
                LOBYTE(v43) = v12;
                if ( (_BYTE)v12 )
                {
                  v16 = OutputAATo24BPP_BGR;
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
LABEL_21:
                  v18 = (_BYTE)v12 == 4;
                  goto LABEL_22;
                }
                v16 = OutputAATo24BPP_RGB;
                goto LABEL_24;
              case 6u:
                v8 = DyesColorMappingTable;
                *(_WORD *)((char *)&v43 + 1) = v12 >> 8;
                BYTE3(v43) = HIBYTE(v12);
                LOBYTE(v43) = v12;
                if ( (_BYTE)v12 )
                {
                  v16 = OutputAATo32BPP_BGR;
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
                  goto LABEL_21;
                }
                v16 = OutputAATo32BPP_RGB;
LABEL_24:
                *(_QWORD *)(v4 + 272) = v16;
                if ( v16 )
                {
                  v18 = (*(_DWORD *)v4 & 0x800) == 0;
                  *(_QWORD *)(v4 + 280) = v43;
                  if ( !v18 )
                  {
                    LOBYTE(v7) = v12;
                    LOBYTE(v6) = v9;
                    GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v6, v7);
                  }
                  v8 = v45(v4);
                }
                if ( (v15 & 0x18) != 0 )
                {
                  v41 = *(_QWORD *)(v4 + 392);
                  if ( v41 )
                    FindBGRMapCache(v41, 0LL);
                }
                if ( v42 )
                  goto LABEL_30;
                v1 = v44;
LABEL_100:
                EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
LABEL_30:
                EngFreeMem(*(PVOID *)(v4 + 304));
                EngFreeMem(*(PVOID *)(v4 + 312));
                return v8;
            }
            if ( v9 != 2 )
            {
              if ( v9 <= 0xF4u )
              {
                v16 = 0LL;
                v8 = -11;
                goto LABEL_24;
              }
              if ( v9 > 0xF6u )
              {
                v26 = v49 == 0;
                v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
                v27 = OutputAATo8BPP_K_B332;
LABEL_52:
                if ( v26 )
                  v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))v27;
                goto LABEL_38;
              }
LABEL_60:
              v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
              v43 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)(v4 + 376) + 16LL));
              if ( (unsigned __int8)(v9 + 8) > 1u )
                v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
              goto LABEL_38;
            }
          }
          v30 = (char)v43;
          BYTE1(v43) = (v15 & 4) == 0 ? 0x77 : 0;
          v31 = *(_BYTE *)(v4 + 97);
          if ( v31 )
            v30 = 1;
          LOBYTE(v43) = v30;
          v32 = v13 - 1;
          if ( !v31 )
            v32 = v13;
          if ( (v32 & 1) != 0 )
          {
            *(_QWORD *)(v4 + 568) -= 4LL;
            BYTE3(v43) = 1;
          }
          v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
          v33 = v9 == 2;
          v34 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, __int64))OutputAAToVGA16;
          goto LABEL_94;
        }
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
  return (unsigned int)v5;
}
