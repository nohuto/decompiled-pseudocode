/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733___::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733_____lambda_4072c03f0563dda202850bcb805fe733___ @ 0x18009FE30
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4072c03f0563dda202850bcb805fe733___ @ 0x1800A0444 (Windows--Internal--ComTaskPool--QueueTask__lambda_4072c03f0563dda202850bcb805fe733___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733___::CTaskWrapper__lambda_4072c03f0563dda202850bcb805fe733_____lambda_4072c03f0563dda202850bcb805fe733___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_18046F8C0;
  return a1;
}
