/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C0049E70
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C0069770 (xxxKeyEventEx.c)
 *     ApiSetEditionIsSAS @ 0x1C00C8134 (ApiSetEditionIsSAS.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  char *v2; // rdi
  __int16 v3; // ax
  __int64 v4; // rcx
  int v6; // ecx
  int v7; // ecx
  void *v8; // r8
  int v9; // eax
  __int16 *v10; // rcx
  __int64 v11; // rdx
  void *v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+68h] [rbp+10h] BYREF

  if ( byte_1C0250DF4 )
  {
    if ( byte_1C0250DF4 == *((_BYTE *)a1 + 2) )
    {
      v7 = *((unsigned __int16 *)a1 + 1);
      if ( (v7 & 0x8000u) != 0 )
      {
        xxxKeyEventEx(
          v7,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0,
          *((void **)a1 + 1),
          (__int64)a1 + 16,
          0,
          0,
          0LL,
          0LL);
        *((_WORD *)a1 + 1) = word_1C0254628;
        *(_BYTE *)a1 = byte_1C025462A;
        byte_1C0250DF4 = 0;
      }
      return 1LL;
    }
    v2 = (char *)a1 + 16;
    xxxKeyEventEx(
      (unsigned __int16)word_1C0254628,
      (unsigned __int16)(unsigned __int8)byte_1C025462A | 0x200,
      *((_DWORD *)a1 + 1),
      0,
      *((void **)a1 + 1),
      (__int64)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    byte_1C0250DF4 = 0;
  }
  else
  {
    v2 = (char *)a1 + 16;
  }
  v3 = *((_WORD *)a1 + 1);
  v4 = 2048LL;
  if ( (v3 & 0x800) != 0 )
  {
    v13 = 0;
    LOBYTE(v4) = v3;
    if ( !(unsigned int)ApiSetEditionIsSAS(v4, &v13)
      && ((byte_1C024B864 & 2) != 0 || gptiForeground && (*((_DWORD *)gptiForeground + 306) & 0x800000) != 0) )
    {
      if ( (byte_1C024B844 & 1) != 0 )
      {
        v8 = (void *)*((_QWORD *)a1 + 1);
        byte_1C0250DF4 = *((_BYTE *)a1 + 2);
        v12 = v8;
        LODWORD(v8) = *((_DWORD *)a1 + 1);
        byte_1C025462A = (byte_1C024B868 & 4) != 0 ? 54 : 42;
        word_1C0254628 = (byte_1C024B868 & 4) != 0 ? 417 : 160;
        LOWORD(v6) = word_1C0254628 | 0x8000;
        xxxKeyEventEx(
          v6,
          (unsigned __int16)(unsigned __int8)byte_1C025462A | 0x200,
          (int)v8,
          0,
          v12,
          (__int64)v2,
          0,
          0,
          0LL,
          0LL);
      }
      else if ( (*((_WORD *)a1 + 1) & 0x2000) == 0 )
      {
        v9 = 0;
        if ( ausNumPadCvt[0] )
        {
          v10 = ausNumPadCvt;
          v11 = 0LL;
          while ( *(_BYTE *)v10 != *((_BYTE *)a1 + 2) )
          {
            ++v11;
            ++v9;
            v10 = &ausNumPadCvt[v11];
            if ( !*v10 )
              return 1LL;
          }
          *((_BYTE *)a1 + 2) = 0;
          *((_WORD *)a1 + 1) |= HIBYTE(ausNumPadCvt[v9]);
        }
      }
    }
  }
  return 1LL;
}
