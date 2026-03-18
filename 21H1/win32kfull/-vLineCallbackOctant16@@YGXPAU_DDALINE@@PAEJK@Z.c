/*
 * XREFs of ?vLineCallbackOctant16@@YGXPAU_DDALINE@@PAEJK@Z @ 0x240C5C
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vLineCallbackOctant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v5; // ecx
  int v6; // edi
  unsigned __int8 *v7; // esi
  unsigned __int8 *v8; // eax
  bool v9; // sf
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]
  struct _DDALINE *v12; // [esp+1Ch] [ebp+8h]
  unsigned __int8 *v13; // [esp+20h] [ebp+Ch]

  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 6);
  v10 = *((_DWORD *)a1 + 4);
  v11 = *((_DWORD *)a1 + 5);
  v12 = (struct _DDALINE *)*((_DWORD *)a1 + 3);
  v7 = &a2[4 * v5];
  v8 = (unsigned __int8 *)**((_DWORD **)a1 + 8);
  v13 = v8;
  while ( 1 )
  {
    ((void (__stdcall *)(_DWORD, unsigned int, unsigned __int8 *))v8)(*((_DWORD *)a1 + 8), a4, v7);
    v12 = (struct _DDALINE *)((char *)v12 - 1);
    if ( !v12 )
      break;
    v7 += a3;
    v9 = v11 + v6 < 0;
    v6 += v11;
    v8 = v13;
    if ( !v9 )
    {
      v6 -= v10;
      v7 += 4;
    }
  }
}
