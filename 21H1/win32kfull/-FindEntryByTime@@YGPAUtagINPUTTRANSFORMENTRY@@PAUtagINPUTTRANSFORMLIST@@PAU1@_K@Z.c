/*
 * XREFs of ?FindEntryByTime@@YGPAUtagINPUTTRANSFORMENTRY@@PAUtagINPUTTRANSFORMLIST@@PAU1@_K@Z @ 0x15E421
 * Callers:
 *     ?GetTransformList@InputTransform@@YGHPAUtagWND@@IPA_KPAUtagINPUT_TRANSFORM@@D@Z @ 0x15E504 (-GetTransformList@InputTransform@@YGHPAUtagWND@@IPA_KPAUtagINPUT_TRANSFORM@@D@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_ii@36 @ 0x149E47 (_WPP_RECORDER_SF_ii@36.c)
 *     ?IsTimeInRange@@YGH_K00@Z @ 0x15E699 (-IsTimeInRange@@YGH_K00@Z.c)
 */

struct tagINPUTTRANSFORMENTRY *__userpurge FindEntryByTime@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  _DWORD *v6; // edi
  int v7; // edx
  _DWORD *v9; // eax
  unsigned __int64 v10; // [esp-8h] [ebp-28h]
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h]
  unsigned int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  unsigned int v15; // [esp+1Ch] [ebp-4h]

  v4 = (_DWORD *)a1;
  v5 = (_DWORD *)(a2 + 4);
  v6 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 == a2 + 4 )
    return (struct tagINPUTTRANSFORMENTRY *)v4;
  if ( *(_DWORD **)(a1 + 4) != v5 )
  {
LABEL_9:
    v9 = (_DWORD *)v4[1];
    if ( v6 != v5 )
    {
      do
      {
        if ( IsTimeInRange(a3, *((_QWORD *)v4 + 1), *((_QWORD *)v9 + 1)) )
          break;
        v9 = v4;
        v4 = (_DWORD *)*v4;
      }
      while ( (_DWORD *)*v4 != v5 );
    }
    return (struct tagINPUTTRANSFORMENTRY *)v4;
  }
  v11 = *(_DWORD *)(a2 + 8);
  v13 = *(_DWORD *)(a1 + 8);
  HIDWORD(v10) = *(_DWORD *)(v11 + 12);
  v14 = *(_DWORD *)(v11 + 8);
  v15 = *(_DWORD *)(a1 + 12);
  LODWORD(v10) = v14;
  v12 = HIDWORD(v10);
  if ( !IsTimeInRange(a3, __PAIR64__(v15, v13), v10) )
  {
    v4 = v6;
    v6 = (_DWORD *)*v6;
    goto LABEL_9;
  }
  v7 = v14;
  if ( a3 - __PAIR64__(v15, v13) <= __PAIR64__(v12, v14) - a3 )
    return (struct tagINPUTTRANSFORMENTRY *)v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_ii(
      (a3 - __PAIR64__(v15, v13)) >> 32,
      v7,
      0xAu,
      10,
      (int)&WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids,
      v14,
      v12,
      a3,
      SHIDWORD(a3));
  }
  return (struct tagINPUTTRANSFORMENTRY *)v11;
}
