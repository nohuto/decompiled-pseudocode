/*
 * XREFs of _AAHalftoneBitmap @ 0x1BAE67
 * Callers:
 *     _HT_HalftoneBitmap@24 @ 0x1BAB42 (_HT_HalftoneBitmap@24.c)
 * Callees:
 *     _GetDstBFInfo @ 0x1BB40C (_GetDstBFInfo.c)
 *     _ValidateHTSI @ 0x1BB56A (_ValidateHTSI.c)
 *     _CreateDyesColorMappingTable @ 0x1BE5CD (_CreateDyesColorMappingTable.c)
 *     _FindBGRMapCache @ 0x1BE6CB (_FindBGRMapCache.c)
 *     _BuildVGA256Xlate @ 0x1BF6C1 (_BuildVGA256Xlate.c)
 *     _SetGrayColorTable @ 0x1C309D (_SetGrayColorTable.c)
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 *     _InitializeFUDI @ 0x1C5214 (_InitializeFUDI.c)
 */

int __thiscall AAHalftoneBitmap(_DWORD *this)
{
  int (__cdecl *v1)(int, int, int, int, int); // ebx
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // esi
  int DyesColorMappingTable; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  char *v11; // esi
  int v12; // ecx
  char v13; // cl
  char v14; // al
  int v15; // eax
  char v16; // cl
  int v17; // eax
  unsigned __int8 v18; // al
  char v19; // al
  char v20; // al
  bool v21; // zf
  int v22; // ebx
  int v23; // ecx
  char v25; // [esp+Ch] [ebp-3Ch]
  int v26; // [esp+10h] [ebp-38h]
  int v27; // [esp+14h] [ebp-34h]
  int (__cdecl *v28)(int); // [esp+18h] [ebp-30h] BYREF
  int v29; // [esp+1Ch] [ebp-2Ch]
  int v30; // [esp+20h] [ebp-28h]
  int v31; // [esp+24h] [ebp-24h]
  int v32; // [esp+28h] [ebp-20h]
  int v33; // [esp+2Ch] [ebp-1Ch]
  int v34; // [esp+30h] [ebp-18h]
  _DWORD *v35; // [esp+34h] [ebp-14h]
  int v36; // [esp+38h] [ebp-10h]
  int v37; // [esp+3Ch] [ebp-Ch]
  int v38; // [esp+40h] [ebp-8h]
  char v39; // [esp+47h] [ebp-1h]

  v1 = 0;
  v2 = this[6];
  v34 = *this;
  v29 = this[1];
  v35 = this;
  v28 = 0;
  v30 = v2;
  v3 = ValidateHTSI(this, 0);
  if ( v3 >= 0 )
  {
    v3 = ValidateHTSI(v35, 1);
    if ( v3 >= 0 )
    {
      v3 = ValidateHTSI(v35, 2);
      if ( v3 >= 0 )
      {
        v3 = SetupAAHeader(v2, &v28);
        if ( v3 > 0 )
        {
          v4 = v35;
          DyesColorMappingTable = CreateDyesColorMappingTable(v35);
          v31 = DyesColorMappingTable;
          if ( DyesColorMappingTable <= 0 )
          {
            v22 = DyesColorMappingTable;
LABEL_96:
            EngReleaseSemaphore(*(HSEMAPHORE *)(v34 + 4));
LABEL_97:
            EngFreeMem(*(PVOID *)(v2 + 188));
            EngFreeMem(*(PVOID *)(v2 + 192));
            return v22;
          }
          v26 = *(_DWORD *)(v2 + 84);
          v6 = *(_DWORD *)(v2 + 188);
          v27 = 1;
          v39 = *(_BYTE *)(v29 + 31);
          v36 = *(_DWORD *)(v6 + 4);
          v37 = *(_DWORD *)(v2 + 268);
          v33 = v37;
          v7 = v34;
          v8 = *(_DWORD *)(v29 + 56) & 0x2000000;
          v25 = v39;
          v9 = *(_DWORD *)v2;
          v32 = *(_DWORD *)v2;
          v38 = 0;
          v29 = v8;
          if ( v8 )
            v38 = v34 + 528;
          if ( v9 >= 0 )
          {
            qmemcpy(*(void **)(v2 + 228), (const void *)(v34 + 812), 0xC1Cu);
            if ( (v9 & 0x800) != 0 )
            {
              v11 = *(char **)(v7 + 7016);
              if ( (v32 & 0x1000) != 0 )
              {
                v11 += 768;
                v12 = 512;
              }
              else
              {
                v12 = 192;
              }
              qmemcpy(*(void **)(v30 + 208), v11, 4 * v12);
            }
            EngReleaseSemaphore(*(HSEMAPHORE *)(v7 + 4));
            v2 = v30;
            v4 = v35;
          }
          else
          {
            v27 = 0;
            if ( (v9 & 0x800) != 0 )
            {
              v10 = *(_DWORD *)(v34 + 7016);
              *(_DWORD *)(v2 + 208) = v10;
              if ( (v9 & 0x1000) != 0 )
                *(_DWORD *)(v2 + 208) = v10 + 768;
            }
          }
          if ( (*(_BYTE *)(v2 + 8) & 4) != 0 )
            SetGrayColorTable(*(_DWORD *)(v2 + 232));
          if ( *(_DWORD *)(v2 + 316) )
            InitializeFUDI(v2);
          v13 = v39;
          *(_DWORD *)(v2 + 336) -= 4;
          if ( (unsigned __int8)v13 > 0xF9u )
          {
            if ( v13 == -6 )
            {
              v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo8BPP_B332_XLATE;
              if ( !v29 )
                v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo8BPP_B332;
              goto LABEL_84;
            }
            if ( v13 == -5 )
            {
              v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo8BPP_MONO;
              BYTE1(v38) = *(_BYTE *)(*(_DWORD *)(v2 + 228) + 17);
              goto LABEL_84;
            }
            if ( (unsigned __int8)v13 <= 0xFDu )
            {
              v20 = v36;
              if ( (v26 & 3) != 0 )
              {
                LOBYTE(v38) = 1;
                v20 = v36 - 1;
              }
              if ( (v20 & 1) != 0 )
              {
                *(_DWORD *)(v2 + 340) -= 4;
                HIBYTE(v38) = 1;
              }
              v14 = v37;
              if ( (_BYTE)v37 )
              {
                if ( (_BYTE)v37 == 4 )
                {
                  if ( v13 == -3 )
                    v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo16BPP_555_BGR;
                  else
                    v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo16BPP_565_BGR;
                }
                else
                {
                  v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo16BPP_ExtBGR;
                }
              }
              else if ( v13 == -3 )
              {
                v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo16BPP_555_RGB;
              }
              else
              {
                v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo16BPP_565_RGB;
              }
              goto LABEL_85;
            }
            if ( v13 == -2 )
            {
              v38 = BuildVGA256Xlate(v4[7], *(_DWORD *)(v2 + 240));
              v1 = (int (__cdecl *)(int, int, int, int, int))OutputAAToVGA256;
              goto LABEL_84;
            }
          }
          else
          {
            if ( (unsigned __int8)v13 >= 0xF8u )
            {
LABEL_51:
              v38 = (int)*(&p8BPPXlate + *(unsigned __int8 *)(*(_DWORD *)(v2 + 228) + 16));
              if ( v13 == -7 || v13 == -8 )
                v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo8BPP_XLATE;
              else
                v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo8BPP_K_XLATE;
              goto LABEL_84;
            }
            if ( v13 == 1 )
            {
              BYTE1(v38) = ((v32 & 4) != 0) - 1;
              v15 = *(unsigned __int8 *)(v2 + 65);
              if ( *(_BYTE *)(v2 + 65) )
              {
                v16 = 8 - v15;
                v17 = v36 - (8 - v15);
                if ( v17 < 0 )
                {
                  v16 = v36;
                  BYTE2(v38) = -(char)v17;
                  LOBYTE(v17) = 0;
                }
                LOBYTE(v38) = v16;
              }
              else
              {
                LOBYTE(v17) = v36;
              }
              v18 = v17 & 7;
              HIBYTE(v38) = v18;
              if ( v18 )
                *(_DWORD *)(v2 + 340) += -4 * v18;
              v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo1BPP;
              goto LABEL_84;
            }
            if ( v13 != 2 )
            {
              if ( v13 == 5 )
              {
                v14 = v37;
                HIWORD(v38) = HIWORD(v33);
                LOWORD(v38) = v37;
                if ( (_BYTE)v37 )
                {
                  if ( (_BYTE)v37 == 4 )
                    v1 = OutputAATo24BPP_BGR;
                  else
                    v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo24BPP_ORDER;
                }
                else
                {
                  v1 = OutputAATo24BPP_RGB;
                }
              }
              else
              {
                if ( v13 != 6 )
                {
                  if ( (unsigned __int8)v13 > 0xF4u )
                  {
                    if ( (unsigned __int8)v13 > 0xF6u )
                    {
                      v14 = v37;
                      if ( v29 )
                        v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo8BPP_K_B332_XLATE;
                      else
                        v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo8BPP_K_B332;
                      goto LABEL_85;
                    }
                    goto LABEL_51;
                  }
                  v31 = -11;
LABEL_84:
                  v14 = v37;
                  goto LABEL_85;
                }
                v14 = v37;
                HIWORD(v38) = HIWORD(v33);
                LOWORD(v38) = v37;
                if ( (_BYTE)v37 )
                {
                  if ( (_BYTE)v37 == 4 )
                    v1 = OutputAATo32BPP_BGR;
                  else
                    v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo32BPP_ORDER;
                }
                else
                {
                  v1 = OutputAATo32BPP_RGB;
                }
              }
LABEL_85:
              *(_DWORD *)(v2 + 172) = v1;
              if ( v1 )
              {
                v21 = (*(_DWORD *)v2 & 0x800) == 0;
                *(_DWORD *)(v2 + 176) = v38;
                if ( !v21 )
                  GetDstBFInfo(v25, v14);
                v22 = v28(v2);
              }
              else
              {
                v22 = v31;
              }
              if ( (v32 & 0x18) != 0 )
              {
                v23 = *(_DWORD *)(v2 + 236);
                if ( v23 )
                  FindBGRMapCache(v23, 0);
              }
              if ( v27 )
                goto LABEL_97;
              goto LABEL_96;
            }
          }
          BYTE1(v38) = (v32 & 4) != 0 ? 0 : 0x77;
          v19 = v36;
          if ( *(_BYTE *)(v2 + 65) )
          {
            LOBYTE(v38) = 1;
            v19 = v36 - 1;
          }
          if ( (v19 & 1) != 0 )
          {
            *(_DWORD *)(v2 + 340) -= 4;
            HIBYTE(v38) = 1;
          }
          v14 = v37;
          if ( v13 == 2 )
            v1 = (int (__cdecl *)(int, int, int, int, int))OutputAATo4BPP;
          else
            v1 = (int (__cdecl *)(int, int, int, int, int))OutputAAToVGA16;
          goto LABEL_85;
        }
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v34 + 4));
  return v3;
}
