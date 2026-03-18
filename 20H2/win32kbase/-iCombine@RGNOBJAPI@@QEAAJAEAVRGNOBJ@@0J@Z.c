/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0037960
 * Callers:
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 * Callees:
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0037A40 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0037C30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003C1F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003C9D0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  REGION *v8; // rbx
  unsigned int v9; // edi
  REGION *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  v12 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, *(_DWORD *)(*(_QWORD *)this + 80LL));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  v8 = v11;
  if ( v11 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v11, this);
    v9 = RGNOBJ::iCombine((RGNOBJ *)&v11, a2, a3, a4);
    if ( v9 && (unsigned int)RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v11) )
    {
      v8 = v11;
      goto LABEL_5;
    }
    v8 = v11;
  }
  v9 = 0;
LABEL_5:
  if ( v8 )
    PopThreadGuardedObject((char *)v8 + 48);
  REGION::vDeleteREGION(v8);
  if ( v12 == 1 )
    REGION::vDeleteREGION(0LL);
  return v9;
}
