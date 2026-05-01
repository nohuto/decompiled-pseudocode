/*
 * XREFs of sub_18003B570 @ 0x18003B570
 * Callers:
 *     PsmCrmSessionUserNotification_0 @ 0x18003DBFC (PsmCrmSessionUserNotification_0.c)
 *     sub_180084670 @ 0x180084670 (sub_180084670.c)
 * Callees:
 *     sub_18003B680 @ 0x18003B680 (sub_18003B680.c)
 *     sub_18003C154 @ 0x18003C154 (sub_18003C154.c)
 */

__int64 sub_18003B570()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  char v3; // dl
  unsigned __int64 v4; // rcx
  PVOID *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&unk_1800B3E98);
  v0 = xmmword_1800B3EA8;
  if ( (_QWORD)xmmword_1800B3EA8 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( (int)sub_18003C154(v0, 0LL) < 0 )
        goto LABEL_20;
      v1 = *(_QWORD *)v0;
      if ( !*(_QWORD *)v0 )
      {
        v1 = *(_QWORD *)(v0 + 8);
        if ( !v1 )
          break;
      }
      if ( (BYTE8(xmmword_1800B3EA8) & 1) != 0 )
        v0 ^= v1;
      else
        v0 = v1;
    }
    v2 = v0;
    v3 = BYTE8(xmmword_1800B3EA8) & 1;
    while ( 1 )
    {
      v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 )
      {
        if ( !v2 )
          break;
        v2 ^= v0;
      }
      if ( !v2 )
        break;
      v4 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        if ( !v4 )
          goto LABEL_15;
        v4 ^= v2;
      }
      if ( v4 && v4 != v0 )
      {
        v0 = v4;
        goto LABEL_2;
      }
LABEL_15:
      v0 = v2;
    }
  }
LABEL_20:
  RtlReleaseSRWLockShared(&unk_1800B3E98);
  RtlAcquireSRWLockShared(&unk_1800B3D60);
  v5 = &qword_1800B3D70;
  v6 = 35LL;
  do
  {
    if ( *v5 )
      sub_18003B680();
    ++v5;
    --v6;
  }
  while ( v6 );
  return RtlReleaseSRWLockShared(&unk_1800B3D60);
}
