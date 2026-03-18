/*
 * XREFs of AAHalftoneBitmap @ 0x1C006D780
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C006D4A4 (HT_HalftoneBitmap.c)
 * Callees:
 *     SetGrayColorTable @ 0x1C0008980 (SetGrayColorTable.c)
 *     ValidateHTSI @ 0x1C006DEE0 (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x1C006E2C8 (CreateDyesColorMappingTable.c)
 *     SetupAAHeader @ 0x1C006F890 (SetupAAHeader.c)
 *     InitializeFUDI @ 0x1C012A668 (InitializeFUDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     GetDstBFInfo @ 0x1C0260FF8 (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x1C0261E34 (FindBGRMapCache.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  unsigned int *v4; // rdi
  int DyesColorMappingTable; // ebx
  __int64 v7; // r9
  unsigned __int8 v8; // r14
  _BYTE *v9; // r8
  int v10; // r15d
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  _OWORD *v14; // rdx
  _OWORD *v15; // rcx
  __int64 v16; // r8
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // rcx
  __int64 (__fastcall *v18)(int, int, int, int, __int64, __int64, __int64, int); // rax
  bool v19; // zf
  char v20; // r13
  __int64 (__fastcall *v21)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v22; // zf
  int v23; // ecx
  char v24; // al
  unsigned __int8 v25; // r15
  char v26; // cl
  char v27; // al
  char v28; // al
  __int64 (__fastcall *v29)(int, int, int, int, __int64, __int64, __int64, int, __int64); // rax
  bool v30; // zf
  __int64 v31; // r11
  void *v32; // r10
  unsigned __int8 *v33; // rdx
  char v34; // al
  char v35; // al
  int v36; // r14d
  __int64 v37; // rcx
  void *v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  int v40; // [rsp+34h] [rbp-64h]
  int v41; // [rsp+38h] [rbp-60h]
  _QWORD v42[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v43; // [rsp+58h] [rbp-40h]
  unsigned int v44; // [rsp+A0h] [rbp+8h]
  int v45; // [rsp+B0h] [rbp+18h]
  __int64 v46; // [rsp+B8h] [rbp+20h]
  int v47; // [rsp+B8h] [rbp+20h]

  v42[0] = 0LL;
  v2 = *a1;
  v39 = *a1;
  v42[1] = *a1;
  v3 = a1[1];
  v46 = v3;
  v4 = (unsigned int *)a1[6];
  v42[2] = v4;
  DyesColorMappingTable = ValidateHTSI(a1, 0LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_6;
  DyesColorMappingTable = ValidateHTSI(a1, 1LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_6;
  DyesColorMappingTable = ValidateHTSI(a1, 2LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_6;
  DyesColorMappingTable = SetupAAHeader(a1, v2, v4, v42);
  if ( DyesColorMappingTable <= 0 )
  {
    *((_QWORD *)v4 + 38) = 0LL;
    *((_QWORD *)v4 + 39) = 0LL;
LABEL_6:
    EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
    return (unsigned int)DyesColorMappingTable;
  }
  DyesColorMappingTable = CreateDyesColorMappingTable(a1);
  v40 = DyesColorMappingTable;
  if ( DyesColorMappingTable > 0 )
  {
    v45 = 1;
    v8 = *(_BYTE *)(v3 + 31);
    v9 = (_BYTE *)*v4;
    v44 = *v4;
    v43 = *((_QWORD *)v4 + 17);
    v10 = *(_DWORD *)(*((_QWORD *)v4 + 38) + 4LL);
    v11 = v4[111];
    v38 = 0LL;
    v47 = *(_DWORD *)(v46 + 56) & 0x2000000;
    if ( v47 )
      v38 = (void *)(v39 + 548);
    v41 = (unsigned __int16)v9 & 0x800;
    if ( (int)v9 >= 0 )
    {
      memmove(*((void **)v4 + 47), (const void *)(v39 + 856), 0xC1CuLL);
      v13 = v39;
      if ( v41 )
      {
        v14 = *(_OWORD **)(v39 + 7064);
        v15 = (_OWORD *)*((_QWORD *)v4 + 42);
        if ( (v44 & 0x1000) != 0 )
        {
          memmove(v15, v14 + 48, 0x800uLL);
          v13 = v39;
        }
        else
        {
          v16 = 6LL;
          do
          {
            *v15 = *v14;
            v15[1] = v14[1];
            v15[2] = v14[2];
            v15[3] = v14[3];
            v15[4] = v14[4];
            v15[5] = v14[5];
            v15[6] = v14[6];
            v15 += 8;
            *(v15 - 1) = v14[7];
            v14 += 8;
            --v16;
          }
          while ( v16 );
        }
      }
      EngReleaseSemaphore(*(HSEMAPHORE *)(v13 + 8));
    }
    else
    {
      v45 = 0;
      if ( ((unsigned __int16)v9 & 0x800) != 0 )
      {
        v12 = *(_QWORD *)(v39 + 7064);
        *((_QWORD *)v4 + 42) = v12;
        if ( ((unsigned __int16)v9 & 0x1000) != 0 )
          *((_QWORD *)v4 + 42) = v12 + 768;
      }
    }
    if ( (v4[2] & 4) != 0 )
      SetGrayColorTable(*((_OWORD **)v4 + 48), (__int64)(v4 + 2));
    if ( v4[132] )
      InitializeFUDI(v4);
    *((_QWORD *)v4 + 70) -= 4LL;
    if ( v8 > 0xF9u )
    {
      if ( v8 == 0xFA )
      {
        v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332;
        v29 = OutputAATo8BPP_B332_XLATE;
        v30 = v47 == 0;
LABEL_89:
        if ( !v30 )
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v29;
        goto LABEL_91;
      }
      if ( v8 == 0xFB )
      {
        BYTE1(v38) = *(_BYTE *)(*((_QWORD *)v4 + 47) + 17LL);
        v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
        goto LABEL_91;
      }
      if ( v8 <= 0xFDu )
      {
        v34 = (char)v38;
        if ( (v43 & 3) != 0 )
          v34 = 1;
        LOBYTE(v38) = v34;
        v35 = v10 - 1;
        if ( (v43 & 3) == 0 )
          v35 = v10;
        if ( (v35 & 1) != 0 )
        {
          BYTE3(v38) = 1;
          *((_QWORD *)v4 + 71) -= 4LL;
        }
        if ( !(_BYTE)v11 )
        {
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
          v18 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
          v19 = v8 == 0xFD;
LABEL_34:
          if ( v19 )
            v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v18;
          goto LABEL_91;
        }
        v20 = v44;
        if ( (_BYTE)v11 == 4 )
        {
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
          v21 = OutputAATo16BPP_565_BGR;
          v22 = v8 == 0xFD;
LABEL_40:
          if ( !v22 )
            v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v21;
          goto LABEL_92;
        }
        v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
        goto LABEL_92;
      }
      if ( v8 == 0xFE )
      {
        v9 = (_BYTE *)*((_QWORD *)v4 + 50);
        v31 = a1[7];
        if ( v31 )
        {
          v32 = (void *)*((_QWORD *)v4 + 50);
          if ( v9 )
          {
            v33 = (unsigned __int8 *)&VGA256Xlate;
            LODWORD(v7) = 366;
            do
            {
              *v9++ = *(_BYTE *)(*v33++ + v31);
              v19 = (_DWORD)v7 == 1;
              v7 = (unsigned int)(v7 - 1);
            }
            while ( !v19 );
          }
        }
        else
        {
          v32 = &VGA256Xlate;
        }
        v38 = v32;
        v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
        goto LABEL_91;
      }
    }
    else
    {
      if ( v8 >= 0xF8u )
        goto LABEL_54;
      if ( v8 == 1 )
      {
        v20 = v44;
        BYTE1(v38) = -((v44 & 4) == 0);
        if ( *((_BYTE *)v4 + 97) )
        {
          v23 = 8 - *((unsigned __int8 *)v4 + 97);
          v24 = v10;
          v10 -= v23;
          if ( v10 < 0 )
          {
            LOBYTE(v23) = v24;
            BYTE2(v38) = -(char)v10;
            LOBYTE(v10) = 0;
          }
          LOBYTE(v38) = v23;
        }
        v25 = v10 & 7;
        BYTE3(v38) = v25;
        if ( v25 )
          *((_QWORD *)v4 + 71) += -4LL * v25;
        v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
        goto LABEL_92;
      }
      if ( v8 != 2 )
      {
        if ( v8 == 5 )
        {
          *(_WORD *)((char *)&v38 + 1) = v11 >> 8;
          BYTE3(v38) = HIBYTE(v11);
          LOBYTE(v38) = v11;
          v20 = v44;
          if ( (_BYTE)v11 )
          {
            v17 = OutputAATo24BPP_BGR;
            v21 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
            goto LABEL_39;
          }
          v17 = OutputAATo24BPP_RGB;
        }
        else
        {
          if ( v8 != 6 )
          {
            if ( v8 > 0xF4u )
            {
              if ( v8 > 0xF6u )
              {
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
                v18 = OutputAATo8BPP_K_B332;
                v19 = v47 == 0;
                goto LABEL_34;
              }
LABEL_54:
              v38 = *(&p8BPPXlate + *(unsigned __int8 *)(*((_QWORD *)v4 + 47) + 16LL));
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
              if ( (unsigned __int8)(v8 + 8) > 1u )
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
              goto LABEL_91;
            }
            v17 = 0LL;
            v40 = -11;
LABEL_91:
            v20 = v44;
            goto LABEL_92;
          }
          *(_WORD *)((char *)&v38 + 1) = v11 >> 8;
          BYTE3(v38) = HIBYTE(v11);
          LOBYTE(v38) = v11;
          v20 = v44;
          if ( (_BYTE)v11 )
          {
            v17 = OutputAATo32BPP_BGR;
            v21 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
LABEL_39:
            v22 = (_BYTE)v11 == 4;
            goto LABEL_40;
          }
          v17 = OutputAATo32BPP_RGB;
        }
LABEL_92:
        *((_QWORD *)v4 + 34) = v17;
        if ( v17 )
        {
          *((_QWORD *)v4 + 35) = v38;
          if ( (*v4 & 0x800) != 0 )
          {
            LOBYTE(v7) = v11;
            LOBYTE(v9) = v8;
            GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v9, v7);
          }
          DyesColorMappingTable = ((__int64 (__fastcall *)(unsigned int *))v42[0])(v4);
          v36 = v45;
        }
        else
        {
          DyesColorMappingTable = v40;
          v36 = v45;
        }
        if ( (v20 & 0x18) != 0 )
        {
          v37 = *((_QWORD *)v4 + 49);
          if ( v37 )
            FindBGRMapCache(v37, 0LL);
        }
        goto LABEL_101;
      }
    }
    BYTE1(v38) = (v44 & 4) == 0 ? 0x77 : 0;
    v26 = *((_BYTE *)v4 + 97);
    v27 = (char)v38;
    if ( v26 )
      v27 = 1;
    LOBYTE(v38) = v27;
    v28 = v10 - 1;
    if ( !v26 )
      v28 = v10;
    if ( (v28 & 1) != 0 )
    {
      BYTE3(v38) = 1;
      *((_QWORD *)v4 + 71) -= 4LL;
    }
    v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
    v29 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, __int64))OutputAAToVGA16;
    v30 = v8 == 2;
    goto LABEL_89;
  }
  v36 = 0;
LABEL_101:
  if ( !v36 )
    EngReleaseSemaphore(*(HSEMAPHORE *)(v39 + 8));
  EngFreeMem(*((PVOID *)v4 + 38));
  EngFreeMem(*((PVOID *)v4 + 39));
  *((_QWORD *)v4 + 38) = 0LL;
  *((_QWORD *)v4 + 39) = 0LL;
  return (unsigned int)DyesColorMappingTable;
}
