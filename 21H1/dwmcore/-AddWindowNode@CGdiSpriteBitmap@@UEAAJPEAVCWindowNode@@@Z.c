/*
 * XREFs of ?AddWindowNode@CGdiSpriteBitmap@@UEAAJPEAVCWindowNode@@@Z @ 0x1800CCA00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  struct CWindowNode **v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  struct CWindowNode *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 128;
  v3 = 0;
  v4 = *((unsigned int *)this + 38);
  v5 = 0;
  v6 = *((_QWORD *)this + 16);
  if ( (_DWORD)v4 )
  {
    v9 = (struct CWindowNode **)*((_QWORD *)this + 16);
    while ( a2 != *v9 )
    {
      ++v5;
      ++v9;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v7 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v7 < (unsigned int)v4 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( (unsigned int)v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v7;
        return (unsigned int)v3;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v12);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC0u, 0LL);
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x6Fu, 0LL);
  }
  return (unsigned int)v3;
}
