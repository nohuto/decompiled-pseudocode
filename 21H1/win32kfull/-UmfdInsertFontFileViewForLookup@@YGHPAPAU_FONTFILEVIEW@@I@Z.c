/*
 * XREFs of ?UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z @ 0xDE312
 * Callers:
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x228F12 (-TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 *     ?Insert@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z @ 0xDE3D8 (-Insert@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z.c)
 */

int __fastcall UmfdInsertFontFileViewForLookup(int *a1, unsigned int a2)
{
  int v2; // eax
  int *v4; // edi
  int v5; // esi
  unsigned int v6; // ecx
  bool v7; // zf
  unsigned int v8; // eax
  char v9; // al
  int v10; // ecx
  int v12; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v2 = 0;
  v4 = a1;
  if ( !a2 )
  {
LABEL_4:
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v13, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
    if ( UmfdFileviewLookup )
    {
      v15 = 0;
      v5 = 1;
      if ( !a2 )
      {
LABEL_13:
        if ( v13 )
        {
          ExReleasePushLockExclusiveEx(v13, 0);
          KeLeaveCriticalRegion();
        }
        return v5;
      }
LABEL_6:
      v6 = g_UmfdFileViewKey;
      v14 = g_UmfdFileViewKey;
      while ( 1 )
      {
        v7 = g_UmfdFileViewKey == -1;
        v8 = ++g_UmfdFileViewKey;
        if ( v7 )
        {
          g_UmfdFileViewKey = 1;
          v8 = 1;
        }
        if ( v6 == v8 )
          break;
        v9 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(&g_UmfdFileViewKey, &v12);
        v6 = v14;
        if ( !v9 )
        {
          if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(v14, v4) )
            break;
          v10 = *v4++;
          *(_DWORD *)(v10 + 36) = g_UmfdFileViewKey;
          if ( ++v15 < a2 )
            goto LABEL_6;
          goto LABEL_13;
        }
      }
    }
    v5 = 0;
    goto LABEL_13;
  }
  while ( a1[v2] )
  {
    if ( ++v2 >= a2 )
      goto LABEL_4;
  }
  return 0;
}
